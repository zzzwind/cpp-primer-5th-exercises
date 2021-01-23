#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(){
    
    int n;
    vector<int> v;
    
    while (cin >> n) {
        v.push_back(n);
    }

    for(decltype(v.size()) i = 0; i < v.size() - 1; ++i)
        cout << v[i] + v[i+1] <<endl;
    
    cout << "---------------------" << endl;
    
    for (decltype(v.size()) i = 0; i != v.size() / 2; ++i) {
        cout << v[i] + v[v.size() - i -1] << endl;
    }
    
    return 0;
}
