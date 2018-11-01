#include<bits/stdc++.h>
using namespace std;
// n = cost of stone , m = how many question
int main() {
    long long int num_of_stone, m, l, r, left, right, type;
    long long int n;
    long long int sum;
    cin>>num_of_stone;
    long long int cost[num_of_stone], sorted_cost[num_of_stone] ,used_sorted_cost[num_of_stone];
    for (int i=0; i<num_of_stone; i++){
        cin>>n;
        cost[i]=cost[i-1]+n;
        sorted_cost[i]=n;
        used_sorted_cost[i]=n;
    }
    sort(sorted_cost, sorted_cost+num_of_stone);
    sort(used_sorted_cost, used_sorted_cost+num_of_stone);

    used_sorted_cost[0]=sorted_cost[0];
    for (int i=1; i<num_of_stone; i++){
        used_sorted_cost[i]=used_sorted_cost[i-1]+sorted_cost[i];
    }

    cin>>m;

    for (int i=0; i<m; i++){
        cin>>type>>l>>r;
        if (type==1) {
            sum=cost[r-1]-cost[l-2];
            cout<<sum<<endl;
        }
        else {
            if (l==1){
                sum=used_sorted_cost[r-1];
            }
            else{
                sum=used_sorted_cost[r-1]-used_sorted_cost[l-2];
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}
