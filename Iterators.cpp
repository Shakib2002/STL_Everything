#include<bits/stdc++.h>
#include<vector>
using namespace std;
 int main()
 {
    // initialize vector of int type

     vector<int> v{1,2,3,4,5,6};

    // initialize vector iterator to point to the first element

     vector<int>::iterator itr=v.begin();
     cout<<"First Vector: "<< *itr<<" "<<endl;

    // change iterator to point to the last element

     itr=v.end()-1;
     cout<<"Second Vector: "<< *itr<<" "<<endl;
  return 0;
 }