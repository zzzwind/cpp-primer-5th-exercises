#include<iostream>
#include<string>
#include<vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    
    string s;
    vector<string> v;
    while (cin >> s) {
        v.push_back(s);
    }
    return 0;
}
