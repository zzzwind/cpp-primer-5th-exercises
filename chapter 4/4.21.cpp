#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    
    vector<int> v{1,2,3,4,5};
    
    for(auto &c : v)
        c = c%2 ? 2 * c : c;
    
    for(auto &c :v)
        cout << c << '\t';
    cout << endl;
    
    return 0;
}
