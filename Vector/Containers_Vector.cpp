#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    // create vector of int type
    vector<int>v{1, 2, 3, 4, 5};

    // print vector elements using ranged loop
    for (int num : v) {
        cout << num << "  ";
    }
    
    return 0;
}