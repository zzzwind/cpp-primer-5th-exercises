#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::cerr;

int abs(int n){
    return n < 0 ? -n : n;
}

int main(){
    cout << abs(-1) << endl;
    return 0;
}
