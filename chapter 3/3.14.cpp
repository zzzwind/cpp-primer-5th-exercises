#include<iostream>
#include<string>
#include<vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    
    int n;
    vector<int> v;
    while (cin >> n) {
        v.push_back(n);
    }
    return 0;
}
