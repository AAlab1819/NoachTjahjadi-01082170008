#include<bits/stdc++.h>
using namespace std;

int distance_source[500];
int adj_matrix[401][401];
bool visited[500];
int depart;

void BFS (bool train, int town, int routes){
    for(int i=0; i<500; i++) {
        distance_source[i]=INT_MAX;
        visited[i]=false;
    }
    queue<int> queues;
    queues.push(1);
    visited[1]=true;
    distance_source[1]=0;
    while(!queues.empty()){
        depart=queues.front();
        queues.pop();
        for(int i=1; i<=town; i++){
            if(train) {
                if(adj_matrix[depart][i]==1 && visited[i]==false){
                    queues.push(i);
                    visited[i]=true;
                    distance_source[i]=distance_source[depart]+1;
                    if(i==town) {
                        return;
                    }
                }
            }
            else {
                if(adj_matrix[depart][i]==0 && visited[i]==false){
                    queues.push(i);
                    visited[i]=true;
                    distance_source[i]=distance_source[depart]+1;
                    if(i==town) {
                        return;
                    }
                }
            }
        }
    }
}

int main() {
    int towns, routess, depart, arrival;
    int train, bus;
    cin>>towns>>routess;
    memset(adj_matrix, 0, sizeof(adj_matrix));
    for(int i=0; i<routess; i++) {
        cin>>depart>>arrival;
        adj_matrix[depart][arrival]=1;
        adj_matrix[arrival][depart]=1;
    }
    if(adj_matrix[1][towns]==1){
        train=1;
        BFS(false, towns, routess);
        bus=distance_source[towns];
    }
    else {
        bus=1;
        BFS(true, towns, routess);
        train=distance_source[towns];
    }
    int answer=max(bus, train);

    if(answer==INT_MAX){
        cout<<-1<<endl;
    }
    else {
        cout<<answer<<endl;
    }

    return 0;
}
