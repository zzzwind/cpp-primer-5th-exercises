#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::cerr;

int main(){
    vector<int> v1{1,2,3,4,5};
    vector<int> v2{1,2,3};
    
    auto it1 = v1.cbegin(), it2 = v2.cbegin();
    
    for (; it1 != v1.cend() && it2 != v2.cend(); ++it1, ++it2) {
        if (*it1 != *it2) {
            break;
        }
    }
    if (it1 == v1.cend() || it2 == v2.cend()) {
        cout << "isPrefix" << endl;
    }else{
        cout << "notPrefix" << endl;
    }
    
    return 0;
}
