#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    list<int>num{1,2,3,4,5}; 
    cout<<"The oroginal List: ";
    for(auto li:num){
        cout<<li<<", ";
    }

    num.push_front(100);
    num.push_back(200);
    cout<<"\nThe Updated list: ";
    for(auto li:num){
        cout<<li<<", ";
    }
  return 0;
 }