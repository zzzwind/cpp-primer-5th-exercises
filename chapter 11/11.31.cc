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
    cout << "before" << endl;
    for (const auto &c : author_book)
      cout << c.first << " " << c.second << endl;
    //查找作者为zhangsan的书
    string search_item("zhangsan");
    auto entries = author_book.count(search_item);
    auto iter = author_book.find(search_item);
    while (entries) {
      cout << iter->second << endl;
      ++iter;
      --entries;
    }
    //删除zhangsan所有的书
    string search_item2("zhangsan");
    auto iter2 = author_book.find(search_item2);
    while (iter2 != author_book.end()) {
      author_book.erase(iter2);  //迭代器指向删除位置的下一位
      iter2 = author_book.find(search_item2); //从新寻找下一个位置
    }

    cout << "after" << endl;
    for (const auto &c : author_book)
      cout << c.first << " " << c.second << endl;
  } else {
    cerr << "fail to open file" << argv[1] << endl;
  }
  return 0;
}
