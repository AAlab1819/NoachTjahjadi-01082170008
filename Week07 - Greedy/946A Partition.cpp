#include<bits/stdc++.h>
using namespace std;

int main() {

    int number_of_elements, elements_sequence;
    int b=0, c=0;

    cin>>number_of_elements;

    for (int i=0; i<number_of_elements; i++){
        cin>>elements_sequence;

        if (elements_sequence>0){
            b=b+elements_sequence;
        }
        else{
            c=c+elements_sequence;
        }
    }

    cout<<b-c<<endl;

    return 0;
}
