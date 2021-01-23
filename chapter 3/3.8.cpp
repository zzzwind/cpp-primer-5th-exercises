#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    string s = "jjjif5vb09j";
    
//    use while
//    unsigned i = 0;
//    while (i<s.size()) {
//        s[i] = 'X';
//        ++i;
//    }
    
    // When you want to transverse sth for is better than while
    for (int i = 0; i < s.size(); ++i) {
        s[i] = 'X';
    }
    cout << s << endl;
    return 0;
}
