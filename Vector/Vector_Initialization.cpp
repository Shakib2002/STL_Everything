#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    vector<int>v={1,2,3,4};
    vector<int>v2{ 1,2,3};
    vector<int>v3(5,12);


    cout<<"vector v1: ";
    for(auto t:v){
        cout<<t<<" ";
    }

    cout<<"vector v2: ";
    for(auto t2:v2){
        cout<<t2<<" ";
    }

    cout<<"vector v3: ";
    for(auto t3:v3){
        cout<<t3<<" ";
    }


  return 0;
 }