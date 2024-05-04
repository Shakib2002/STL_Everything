#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
 int main()
 {
    // initialize vector of int type
     vector<int>v{6,4,9,2,4,1,7,0};
    // sort vector elements in ascending order
     sort(v.begin(), v.end());

    // print the sorted  vector 
     for(int v1:v){
        cout<<v1<<" ";
     }
  return 0;
 }