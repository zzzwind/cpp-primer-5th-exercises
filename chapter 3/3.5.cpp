#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    string s1, s2;
    
    // connect without space
//    while (cin >> s1) {
//        s2 += s1;
//    }
    // connect with space
    while (cin >> s1) {
        s2 += s1 + " ";
    }
    cout << s2 << endl;
    return 0;
}
