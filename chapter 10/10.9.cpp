#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    std::vector<string> v;
    string word;
    while (cin >> word) {
        v.push_back(word);
    }
    std::sort(v.begin(), v.end());
    auto end_unique = unique(v.begin(), v.end());
    v.erase(end_unique, v.end());
    for(auto &c : v){
        cout << c << " ";
    }
    cout << endl;
    return 0;
}
