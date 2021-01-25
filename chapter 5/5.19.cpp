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
    do {
        string s1, s2;
        cout << "Input two string" << endl;
        cin >> s1 >> s2;
        string res = (s1.size() < s2.size()) ? s1 : s2;
        cout << res << endl;
    } while (!res.empty());
    return 0;
}
