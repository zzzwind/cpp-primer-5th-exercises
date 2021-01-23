#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(){
    vector<int> v;
    int n;
    while (cin>>n) {
        v.push_back(n);
    }
    
    for(auto it = v.cbegin(); it != v.cend() - 1; ++it)   //it+1 最大到 v.cend - 1, 否则就会超出范围
        cout << *it + *(it + 1) << endl;
    
    auto beg = v.cbegin(), end = v.cend();
    auto mid = v.cbegin() + (end - beg) / 2;
    
    for(auto it = beg; it != mid; ++it)
        cout << *it + *(end - 1 - (it - beg)) << '\t' << endl;  //it - beg 才能表示位置
    
    return 0;
}
