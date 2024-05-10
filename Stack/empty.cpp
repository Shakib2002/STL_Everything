#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    stack<double>nums;
    cout<<"Is the stack empty?";
    if(nums.empty()){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    cout<<"pushing Element...";
    nums.push(3.4);
    nums.push(9.6);

    cout<<"Is the stack empty?";
    if(nums.empty()){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
  return 0;
 }