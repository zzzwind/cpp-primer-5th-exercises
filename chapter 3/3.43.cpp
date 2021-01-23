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
    
    for(int (&row)[colCnt] : ia){
        for(int &col : row)
            cout << col << '\t';
        cout << endl;
    }
    
    cout << string(20, '-') << endl;
    
    for (int i = 0; i<rowCnt; ++i) {
        for (int j =0; j<colCnt; ++j) {
            cout << ia[i][j] << '\t';
        }
        cout << endl;
    }
    
    cout << string(20, '-') << endl;
    
    for (int (*p)[colCnt] = ia; p != ia + rowCnt; ++p) {
        for (int *q = *p; q != *p + colCnt ; ++q) {
            cout << *q << '\t';
        }
        cout << endl;
    }
    
    return 0;
}
