#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     queue<string>animals;
     animals.push("dog");
     animals.push("cat");
     animals.push("cow");

     cout<<"Queue: ";
     while(!animals.empty()){
        cout<<animals.front()<<", ";
        animals.pop();
     }
     cout<<endl;
  return 0;
 }