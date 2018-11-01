#include <bits/stdc++.h>
using namespace std;

int main(){

  int n, L, buyCurrent; // n = number of type of bottles, L = required lemonade
  long long minimun_cost=(long long)4e18;
  long long total = 0;

  cin>>n>>L;
  int cost[n];

  for (int i=0; i<n; i++){
    cin>>cost[i];
  }
  for (int i=0; i<n-1; i++){

    if (cost[i+1]<2*cost[i]){
        cost[i+1]=cost[i+1];
    }

    else {
        cost[i+1]=2*cost[i];
    }
  }
  for (int i=n-1; i>=0; i--){

    buyCurrent=L/(1<<i);

    total += (long long)buyCurrent*cost[i];
    L -= buyCurrent<<i;

    minimun_cost=min(minimun_cost, total+(L>0)*cost[i]);
  }

  cout<<minimun_cost<<endl;
  return 0;
}
