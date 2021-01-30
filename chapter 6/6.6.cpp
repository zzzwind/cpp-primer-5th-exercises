#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::cerr;

int func(){
    static int i;
    ++i;
    return i;
}

int main(){
    func();
    return 0;
}
