#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    vector<int>v{1,2,3,4,5,6};
    vector<int>::iterator it;

    for(it=v.begin(); it!=v.end();it++){
        cout<<*it<<" ";
    } 
  return 0;
 }