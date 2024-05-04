#include <iostream>
#include <set>
using namespace std;

int main() {

  // initialize a set of int type
  set<int> numbers = { 0,3,9,2,2,5,0};

  // print the set
  cout << "Numbers are: ";
  for(auto &num: numbers) {
    cout << num << ", ";
  }

  return 0;
}