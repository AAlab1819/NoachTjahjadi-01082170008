#include<bits/stdc++.h>
using namespace std;

int main(){

    int test_case;
    cin>>test_case;
    while (test_case>0){

        int strength, number_of_item, total_of_people;
        int maximum_value=0;
        int dp[31]={0};

        cin>>number_of_item;
        int weight[number_of_item], price[number_of_item];

        for (int i=0; i<number_of_item; i++){
            cin>>price[i]>>weight[i];
        }
        for (int i=0; i<number_of_item; i++){

            for (int j=30; j>=0; j--){

                if (weight[i]<=j && dp[j]<dp[j-weight[i]] + price[i]){
                    dp[j]= dp[j - weight[i]] + price[i];
                }
            }
        }
        cin>>total_of_people;
        for (int i=0; i<total_of_people; i++){
            cin>>strength;

            maximum_value = maximum_value + dp[strength];
        }
        cout<<maximum_value<<endl;
        test_case--;
    }
    return 0;
}
