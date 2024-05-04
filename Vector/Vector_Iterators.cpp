#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    vector<int> v{1,2,3,4,5,6};
    vector<int>::iterator iter;

    iter=v.begin();
    cout<<"num[0]: "<<*iter<<endl;

    iter= v.begin()+2;
    cout<<"num[2]: "<<*iter<<endl;

    iter= v.end()-1;
    cout<<"num[5]: "<<*iter<<endl; 
  return 0;
 }