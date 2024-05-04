#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    forward_list<int>fwd_list={1,2,3,4,5,6};
    cout<<"Forward list before Assign(): ";
    for(auto element:fwd_list){
        cout<<element<<" ";
    }

    fwd_list.assign({7,8,9,0});
    cout<<"\nForward list after Assign(): ";
    for(auto element:fwd_list){
        cout<<element<<" ";
    }

 cout<<endl;
  return 0;
 }