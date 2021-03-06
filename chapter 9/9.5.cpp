#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::vector;
using std::cerr;
using std::endl;

int find(vector<int> v, int n){
    auto begin = v.cbegin(), end = v.cend();
    while (begin != end) {
        if(*begin == n)
            return *begin;
        ++begin;
    }
    return -1;
}

int main(){
    vector<int> v{1,23,3};
    cout<<find(v, 3)<< endl;
    return 0;
}
