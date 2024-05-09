#include<bits/stdc++.h>
using namespace std;
void display_deque(deque<int>);
 int main()
 {
     deque<int>nums{1,2,3,4,5};
     cout<<"Initial Deque: ";
     display_deque(nums);
     cout<<"\n";

     nums.pop_back();

     cout<<"\nDeque after pop_back: ";
     display_deque(nums);

     nums.pop_front();
     cout<<"\nDeque after pop_front: ";
     display_deque(nums);

     
  return 0;
 }
 void display_deque(deque<int>dq){
    for(auto num:dq){
        cout<<num<<" "<<", ";
    }
 }