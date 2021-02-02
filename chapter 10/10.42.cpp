
#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

void elim_dumps (list<string> &words) {
  words.sort();
  words.unique();
}

int main(int argc, char **argv) {
  list<string> words;
  for (string s; cin >> s; words.push_back(s)) {}
  elim_dumps(words);
  for (const auto &c : words)
    cout << c << " ";
  cout << endl;
  return 0;
}
