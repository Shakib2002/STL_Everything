#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    stack<int>v;

    v.push(1);
    v.push(200);
    v.push(30);
    v.push(100);

    cout<<"Number are: "<<endl;

    while(!v.empty()){
        cout<<v.top()<<endl;
        v.pop();
    }
  return 0;
 }