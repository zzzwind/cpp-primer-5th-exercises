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
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    vector<int> v(begin(a), end(a));
    for(auto c : v)
        cout << c << endl;
    return 0;
}
