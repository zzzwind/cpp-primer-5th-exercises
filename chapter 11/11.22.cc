#include <iostream>
#include <map>
#include <string>

using namespace std;


int main() {
  map<string, vector<int>> mp;
  auto ret = mp.insert({"m", {1,2,3}});
  //pair<map<string, vector<int>>::iterator, bool>, 即pair<迭代器, 布尔>
  return 0;
}
