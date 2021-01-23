#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(){
    vector<int> v{1,2,3,4,5,6,7};
    for(auto it = v.begin(); it != v.end(); ++it)
        *it = *it * 2;
    for(auto c : v)
        cout << c << endl;
    return 0;
}
