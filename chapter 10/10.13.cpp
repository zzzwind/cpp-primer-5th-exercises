#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool compareLength(const string &s){
    return (s.size() > 5) ? true : false;
}

int main(){
    std::vector<string> words;
    for(string s; cin >> s; words.push_back(s)){}
    
    auto bg = std::partition(words.begin(), words.end(), compareLength);
    for(auto it = words.begin(); it != bg; ++it)
        cout << *it << " ";
    cout << endl;
    return 0;
}
