#include<iostream>
#include<iterator>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    int b[] = {0,1,2,3,6,6,7,8,9,9};
    
    int cnt = 1;
    for (int i = 0; i<10; ++i) {
        if (a[i] == b[i]) {
            ++cnt;
        }
    }
    if (cnt == 10) {
        cout << "the same" << endl;
    }else
        cout << "not equal" << endl;
    
    return 0;
}


//vector 可以直接利用 == 判断 easy
