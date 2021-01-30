#include<iostream>
#include<string>
#include<sstream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

std::istream &read(std::istream &is){
    auto old_state = is.rdstate();
    string s;
    while (is.rdstate() != is.eofbit) {
        is >> s;
        cout << s <<endl;
    }
    is.clear();
    is.setstate(old_state);
    return is;
}

int main(){
    string s;
    std::getline(cin, s);
    std::istringstream iss(s);
    read(iss);
    return 0;
}
