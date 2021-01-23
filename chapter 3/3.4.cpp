#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
//    if (s1 != s2) {         //compare s1 s2
//        if (s1>s2) {
//            cout << s1 << endl;
//        }else{
//            cout << s2 << endl;
//        }
//    }
    if (s1.size() != s2.size()) {    // compare the size
        if (s1.size() > s2.size()) {
            cout << s1 << endl;
        }else{
            cout << s2 << endl;
        }
    }
    return 0
}
