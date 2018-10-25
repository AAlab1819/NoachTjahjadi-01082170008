#include<bits/stdc++.h>
using namespace std;

int main(){

    int number_of_session; bool checker=true;
    cin>>number_of_session;
    int pizza_order[number_of_session];

    for (int i=0; i<number_of_session; i++){
        cin>>pizza_order[i];
    }
    for (int i=0; i<number_of_session; i++){
        if (pizza_order[i]<0) {
            checker=false;
        }
        pizza_order[i+1]=pizza_order[i+1]-pizza_order[i]%2;
    }
    if (pizza_order[number_of_session-1]%2==1){
        checker=false;
    }
    if (checker==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
