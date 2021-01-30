#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::cerr;
using std::initializer_list;
int sum(initializer_list<int> li){
    int sum = 0;
    for(auto c : li)
        sum+=c;
    return sum;
}

int main(){
    
    cout <<sum({1,2,3})<<endl;
    return 0;
}
