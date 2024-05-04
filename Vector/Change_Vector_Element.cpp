#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    vector<int>v{1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"Initial Vector: ";

    for(auto v1:v){
        cout<<v1<<" ";
    } 
    v.at(1)=100;
    v.at(3)=200;

    cout<<"\nUpdated Vector: ";

    for(auto v1:v){
        cout<<v1<<" ";
    } 
  
  return 0;
 }