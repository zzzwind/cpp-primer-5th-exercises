#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void elimDups(vector<string> &words){
    std::sort(words.begin(), words.end());
    auto end_unique = std::unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}
void biggies(vector<string> &words, vector<string>::size_type sz){
    elimDups(words);
    std::stable_sort(words.begin(), words.end(), [](const string  &s1, const string &s2) { return s1.size() < s2.size();});
    
    auto wc = std::find_if(words.begin(), words.end(), [sz](const string &a){ return a.size() > sz; });
    
    for_each(wc, words.end(),[](const string &s){cout << s << " ";});
}

int main(){
    vector<string> words;
    for(string s; cin >> s; words.push_back(s));
    biggies(words, 5);
    return 0;
}
