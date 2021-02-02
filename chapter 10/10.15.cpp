#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int  sum(int a){
    auto c =  [a](int b){return a+b;};
    return a+c(5);
}

int main(){
    cout <<sum(2) <<endl;
    return 0;
}
