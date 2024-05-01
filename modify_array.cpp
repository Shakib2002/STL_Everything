#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    array<int,5> v={1,2,3,4,5};
    cout<<"First element: "<<v[0]<<endl;
    cout<<"Second element: "<<v[1]<<endl;

    v[0] =10;
    cout<<"First element: "<<v[0]<<endl;
    v.at(1)=20;
    cout<<"Second element: "<<v[1]<<endl;

  cout<<"Total Number: "<<endl;
  for(auto v1:v){
    cout<<v1<<" ";
  }
  
  return 0;
 }