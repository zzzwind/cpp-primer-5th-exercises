#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void elimDumps(std::vector<string> &v){
    std::sort(v.begin(), v.end());
    auto end_unique = unique(v.begin(), v.end());
    v.erase(end_unique, v.end());
}
bool isShorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}

int main(){
    std::vector<string> v;
    string word;
    while (cin >> word) {
        v.push_back(word);
    }
    elimDumps(v);
    std::stable_sort(v.begin(), v.end(), isShorter);
   
    for(auto &c : v){
        cout << c << " ";
    }
    cout << endl;
    return 0;
}
