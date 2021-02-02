#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

bool check_size(const string &s, string::size_type sz){
    return s.size() < sz;
}

void find_first(const vector<int> &nums, const string &s){
    
    auto wc = std::find_if(nums.begin(), nums.end(), bind(check_size, s, std::placeholders::_1));
    cout << *wc << endl;
}

int main(){
    string s ;
    cout << "Input string :";
    cin >> s;
    vector<int> nums;
    cout << "Input numbers ";
    for(int  i; cin >> i; nums.push_back(i));
    find_first(nums, s);
    return 0;
}
