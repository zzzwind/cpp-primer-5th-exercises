#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;


int main(int argc, char **argv) {
  ifstream in(argv[1]);
  if (in) {
    string line, author, book;
    multimap<string, string> author_book;
    while (getline(in, line)) {
      istringstream iss(line);
      iss >> author >> book;    //通过字符串输入流 可以读取一个一个单词
      author_book.insert({author, book});
    }
    for (const auto &c : author_book)
      cout << c.first << " " << c.second << endl;
  } else {
    cerr << "fail to open file" << argv[1] << endl;
  }
  return 0;
}
