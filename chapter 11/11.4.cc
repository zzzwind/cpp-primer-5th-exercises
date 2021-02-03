#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;


int main() {
  map<string, size_t> word_count;
  string word;
  while (cin >> word) {
    for (auto &c : word)      // 1. 首先都转成小写(大写)以忽略大小写
      c = tolower(c);
    auto iter = word.begin();
    while (iter != word.end()) {  //2. 遍历字符串将标点删除
      if(ispunct(*iter))
        iter = word.erase(iter);
      else
        ++iter;
    }
    ++word_count[word];
  }
  for (const auto &w : word_count)
    cout << w.first << " occurs " << w.second
         << ((w.second >1) ? " times" : " time") <<endl;
  return 0;
}
