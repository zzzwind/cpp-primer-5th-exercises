#include<iostream>
#include<algorithm>
#include<vector>


using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main(){
    
    std::vector<int> v;
    
    int n;
    while (cin >> n) {
        v.push_back(n);
    }
    
    cout<<std::count(v.begin(), v.end(), 4) << endl;
    
    return 0;
}
