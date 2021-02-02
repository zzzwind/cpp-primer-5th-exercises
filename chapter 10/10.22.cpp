#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

bool shorter(const string &s, string::size_type sz){
    return s.size() < sz;
}

void countN(const vector<string> &words){
//    auto a = std::count_if(words.begin(), words.end(),[](const string &s)->bool{
//        if(s.size() > 6)
//            return true;
//        else
//            return false;
//    });
    auto a = std::count_if(words.begin(), words.end(), bind(shorter, std::placeholders::_1, 6));
    cout << a << " times" << endl;
}

int main(){
    vector<string> words;
    for(string s; cin >> s; words.push_back(s));
    countN(words);
    return 0;
}
