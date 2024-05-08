#include<bits/stdc++.h>
using namespace std;
void display_queue(queue<string>q);

 int main()
 {
     queue<string>animals;
     animals.push("dog");
     animals.push("cat");
     animals.push("cow");

     cout<<"Queue: ";
     display_queue(animals);
     animals.pop();

     cout<<"Final Queue: ";
     display_queue(animals);
 
  return 0;
 }

 void display_queue(queue<string>q){
   while(!q.empty()){
         cout<<q.front()<<" ";
         q.pop();
   }
   cout<<endl;
 }