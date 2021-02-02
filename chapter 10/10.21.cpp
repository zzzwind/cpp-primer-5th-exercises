#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void test(){
    int i = 10;
    auto a = [&] { return i > 0 ? --n, false : true; };
    if(a()) cout << "catured number is 0 " << endl;
    else cout << "captured number is not 0 " << endl;
}

int main(){
    test();
    return 0;
}
