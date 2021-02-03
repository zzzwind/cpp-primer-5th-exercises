#include <iostream>
#include <map>
#include <list>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char **argv) {
  ifstream in(argv[1]);
  if (in) {
    map<string, list<int>> mp;
    string line, word;
    size_t num_line = 0;
    while (getline(in, line)) {
      ++num_line;
      istringstream word_line(line);
      while(word_line >> word) {
//        mp[word] = list<int> ();  这句话是多余的, 本来就是空链表, 不需要再置空
        mp[word].push_back(num_line);
      }
//      for (const auto &c : mp)            这样写 是错的 多余的
//        mp[c.first].push_back(num_line);
        
    }
    for (const auto &k : mp) {
      cout << k.first << " 出现在:";
      for (const auto &v : k.second) {
        cout << v << " ";
      }
      cout << "行" << endl;
    }
  } else {
    cerr << "fail to open " << argv[1] << endl;
  }
  return 0;
}
