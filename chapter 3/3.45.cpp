#include<iostream>
#include<iterator>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;
using std::string;

int main() {
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };
    
    
    for(auto &row : ia){
        for(auto col : row)
            cout << col << '\t';
        cout << endl;
    }
    
    cout << string(20, '-') << endl;
    
    for (auto i = ia; i != ia + 3; ++i) {
        for (auto j = *i; j != *i +4; ++j) {
            cout << *j << '\t';
        }
        cout << endl;
    }
    
    return 0;
}
