#include<iostream>
#include<string>
#include<cctype>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    string s = "jjjif5v,,,,,,.....b09j!!!";
    string result;
    
    for(auto &c : s){
        if (!ispunct(c)) {
            result += c;
        }
    }
    
    cout << result << endl;
    return 0;
}
