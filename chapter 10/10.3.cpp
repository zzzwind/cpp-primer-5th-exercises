#include<iostream>
#include<numeric>
#include<vector>
#include<string>


using std::cout;
using std::cin;
using std::cerr;
using std::endl;


int main(){
    
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    cout << std::accumulate(v.begin(), v.end(), 0) << endl;
    
    return 0;
}
