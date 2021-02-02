#include<iostream>
#include<algorithm>
#include<list>
#include<string>


using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;

int main(){
    
    std::list<string> v;
    
    string s;
    while (cin >> s) {
        v.push_back(s);
    }
    
    cout<<std::count(v.begin(), v.end(), string("my")) << endl;
    
    return 0;
}
