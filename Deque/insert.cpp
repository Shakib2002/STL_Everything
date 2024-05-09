#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    deque<int>nums {1,2,3,4};
    cout<<"Initial Deque: ";
    for(auto num:nums){
        cout<<num<<" ";
    } 

    nums.push_back(5);
    nums.push_front(0);
 
    cout<<"\nFinal Deque: ";
    for(auto num:nums){
        cout<<num<<" ";
    }

  return 0;
 }