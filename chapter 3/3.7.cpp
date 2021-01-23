#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

// no difference
int main(){
    string s("jkjkjkjkjk");
    for(char &c : s)
        c = 'X';
    cout << s << endl;
    return 0;
}
