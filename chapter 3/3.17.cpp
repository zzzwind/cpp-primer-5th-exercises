#include<iostream>
#include<string>
#include<cctype>
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
    for(auto &c : v)             //the outside loop traverses each word
        for(auto &k : c)         //the inside loop traverses each character
          k = toupper(k);
    
    for(auto &c : v)
        cout << c <<endl;
    return 0;
}
