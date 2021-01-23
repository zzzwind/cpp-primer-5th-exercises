#include<iostream>
#include<iterator>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    
    for(auto i : a)
        cout << i << " ";
    cout << endl;
    
    int *pbeg = std::begin(a), *pend = std::end(a);
    while (pbeg != pend) {
        *pbeg = 0;
        ++pbeg;
    }
    
    for(auto i : a)
        cout << i << " ";
    cout << endl;
    
    return 0;
}
