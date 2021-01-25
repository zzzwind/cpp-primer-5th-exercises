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
    
    string s1,s2;
    while (cin >> s1) {
        if (s2 == s1 && s1[0] >= 'A' && s1[0] <= 'Z') {
            break;
        }else{
            s2 = s1;
        }
    }
    
    return 0;
}
