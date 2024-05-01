#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    array<int,10>v{1,2,3,4,5,6,7,8,9,10};
    cout<<"The elements are: ";

    for(auto v1:v){
        cout<<v1<<" ";
    } 
v[3]=100;
v.at(4)=200;

// array of 5 integers

// access first array element
cout << v[0]<<endl; // returns 1

// access second array element
cout << v[1]<<endl; // returns 2 



// array of 5 integers
 
cout << v.at(0)<<endl; // returns 1
cout << v.at(1)<<endl; // returns 2
cout << v.at(10)<<endl; // throws std::out_of_range exception





  return 0;
 }