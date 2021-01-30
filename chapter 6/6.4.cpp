#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::cerr;

int fact(){
    int n;
    int ret = 1;
    cout << "input number" <<endl;
    cin >> n;
    while (n > 1) {
        ret *= n--;
    }
    return ret;
}

int main(){
    cout << fact() << endl;
    return 0;
}
