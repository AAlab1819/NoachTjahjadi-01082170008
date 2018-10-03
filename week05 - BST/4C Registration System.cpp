#include<bits/stdc++.h>
using namespace std;

int main() {

    map <string, int> list_of_name;
    string username;
    int n;

    cin >> n; // how many request to the system

    for (int i=0; i<n; i++) {
        cin>>username;
        if (list_of_name[username]==0) {
            list_of_name[username]=1;
            cout<< "OK" <<endl;
        }else {
            cout<<username<<list_of_name[username]<<endl;
            list_of_name[username]++;
        }
    }

    return 0;
}
