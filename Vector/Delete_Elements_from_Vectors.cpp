#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     vector<int>v{1,2,3,4};
     cout<<"Initial Vector: ";
     for(auto v1:v){
        cout<<v1<<" ";
     }
     v.pop_back();

     cout<<"\nUpdated Vector: ";
     for(auto v1:v){
        cout<<v1<<" ";
     }
  return 0;
 }