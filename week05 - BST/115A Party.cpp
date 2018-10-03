#include <bits/stdc++.h>

using namespace std;

int main(){

    map<int, int> superior;
    int n, m, current_depth, check; //n = employee, m = manager
    int groups_in_party = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> m;
        superior[i] = m;
    }
    for(int i = 1; i <= n; i++){
        current_depth = 1;
        check = superior[i];
        while(check != -1){
            current_depth++;
            check = superior[check];
        }
        groups_in_party = max(current_depth, groups_in_party);
    }
    cout << groups_in_party;
    return 0;
}
