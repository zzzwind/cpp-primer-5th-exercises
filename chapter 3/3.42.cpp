#include<iostream>
#include<iterator>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main() {
    int a[5];
    vector<int> v{1,2,3,4,6};
    
    for (int i = 0; i < 5; ++i) {
        a[i] = v[i];
    }
    for(auto c : a)
        cout << c <<endl;
    
    return 0;
}
