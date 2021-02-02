#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void countN(const vector<string> &words){
    auto a = std::count_if(words.begin(), words.end(),[](const string &s)->bool{
        if(s.size() > 6)
            return true;
        else
            return false;
    });
    cout << a << "times " << endl;
}

int main(){
    vector<string> words;
    for(string s; cin >> s; words.push_back(s));
    countN(words);
    return 0;
}
