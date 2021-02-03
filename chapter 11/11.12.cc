#include <iostream>
#include <map>
#include <list>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
  vector<pair<string, int>> vec;
  string s;
  int i;
  while (cin >> s >> i) {
    vec.push_back({s, i});
  }
  
  for (const auto &p : vec)
    cout << p.first << ":" << p.second << endl;
  return 0;
}
