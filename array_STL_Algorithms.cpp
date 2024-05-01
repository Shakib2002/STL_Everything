#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    array<int,5>v={99,11,55,33,88};

// sorting
    sort(v.begin(),v.end());
    cout<<"The short array is: ";
    for(auto v1:v){
        cout<<v1<<" ";
    }
    cout<<endl;

  // searching
    auto found=find(v.begin(),v.end(),5);   
    if(found !=v.end())
    cout<<"Found"<<endl;
    else
    cout<<"Not found"<<endl;

   // summing
   int sum = accumulate(v.begin(),v.end(),0);
   cout<<sum<<endl;


  return 0;
 }