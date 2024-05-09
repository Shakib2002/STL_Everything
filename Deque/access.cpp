#include<bits/stdc++.h>
using namespace std;
 int main()
 {  
    deque<int>num{1,2,3,4,5};

    cout<<"Front element: "<<num.front()<<endl;
    cout<<"Back element: "<<num.back()<<endl; 
    cout<<"Element at index: "<<num.at(1)<<endl; 
    cout<<"Element at index 0: "<<num[0]<<endl;  
  return 0;
 }