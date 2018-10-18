#include <bits/stdc++.h>

using namespace std;

struct Topic{
    int id;
    long long int old_z_score;
    long long int new_z_score;
    long long int difference;
};

vector<Topic> heapify(vector<Topic> list_of_topic){
    for(int i=list_of_topic.size()/2; i>=0; i--){
        int parent = i;
        int left = (2*i)+1;
        int right = (2*i)+2;
        if(left < list_of_topic.size()){
            if(list_of_topic[parent].id < list_of_topic[left].id){
                swap(list_of_topic[parent], list_of_topic[left]);
            }
        }
        if(right < list_of_topic.size()) {
            if(list_of_topic[parent].id < list_of_topic[right].id){
                swap(list_of_topic[parent], list_of_topic[right]);
            }
        }
    }
    return list_of_topic;
}

vector<Topic> heap_sort(vector<Topic> list_of_topic){
    vector<Topic> sorted_topic;
    for(int i=0; i<list_of_topic.size(); i++){
        sorted_topic.push_back(list_of_topic[0]);
        list_of_topic[0].id = -1;
        list_of_topic = heapify(list_of_topic);
    }
    return sorted_topic;
}


int main(){
    map<long long int,vector<Topic>,greater<long long int> > heap;
    int n;
    cin >> n;
    int id, z, p, l, c, s;
    Topic new_topic;

    for (int i=0; i<n; i++){
        cin >> id >> z >> p >> l >> c >> s;
        new_topic.id = id;
        new_topic.old_z_score = z;
        new_topic.new_z_score = (p*50LL) + (l*5LL) + (c*10LL) + (s*20LL);
        new_topic.difference = new_topic.new_z_score - new_topic.old_z_score;
        heap[new_topic.difference].push_back(new_topic);
    }

    for(map<long long int,vector<Topic>,greater<long long int> >::iterator it=heap.begin(); it!=heap.end(); it++){
        it->second = heapify(it->second);
        it->second = heap_sort(it->second);
    }

    int counter = 1;
    for(map<long long int,vector<Topic>,greater<long long int> >::iterator it=heap.begin(); it!=heap.end(); it++){
        for(int i=0; i<(it->second).size(); i++) {
            cout << (it->second)[i].id << " " << (it->second)[i].new_z_score << endl;
            if(++counter > 5) {
                break;
            }
        }
        if(counter > 5){
            break;
        }
    }
    return 0;
}
