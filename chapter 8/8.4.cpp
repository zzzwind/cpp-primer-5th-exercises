#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    vector<string> v;
    std::ifstream in(string("8.1.cpp"));
    if (in) {
        string s;
        while (std::getline(in, s)) {
            v.push_back(s);
        }
    }else{
        std::cerr << " fail to open " << endl;
    }
    
    for(auto &c : v)
        cout << c << endl;
    
    
    return 0;
}
