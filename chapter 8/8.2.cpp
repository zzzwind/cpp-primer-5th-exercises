#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

std::istream &read(std::istream &is){
    auto old_state = is.rdstate;
    string s;
    while (is.rdstate() != is.eofbit) {
        is >> s;
    }
    is.clear();
    is.setstate(old_state);
}

int main(){
    read(cin);
    return 0;
}
