#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;



int main(){
    auto c = [](int a, int b){return a+b;};
    cout << c(3,5) <<endl;
    return 0;
}
