#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::cerr;

bool has_capital(const string &s){
    for(auto &c : s)
        if(c>= 'A' && c<= 'Z')
            return true;
    return false;
}

void aa(string &s){
    for(auto &c : s)
     tolower(c);
}

int main(){
    cout <<has_capital("Stttj") <<endl;
    string s("Hello UU");
    aa(s) ;
    cout <<s<<endl;
    return 0;
}
