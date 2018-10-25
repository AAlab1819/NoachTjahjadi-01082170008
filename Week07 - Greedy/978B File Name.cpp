#include<bits/stdc++.h>
using namespace std;

int main() {

    int length_of_file_name, remove_forbidden_char=0;
    string file_name;

    cin>>length_of_file_name;
    cin>>file_name;

    for (int i=0; i<length_of_file_name; i++){
        if (file_name[i]=='x' && file_name[i+1]=='x' && file_name[i+2]=='x') {
            remove_forbidden_char++;
        }
    }
    cout<<remove_forbidden_char<<endl;

    return 0;
}
