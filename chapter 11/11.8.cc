#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>

using namespace std;

void elim_dumps(vector<string> &vec){
  sort(vec.begin(), vec.end());
  auto end_unique = unique(vec.begin(), vec.end());
  vec.erase(end_unique, vec.end());
}

int main() {
  vector<string> words = {"hha","hhha","df","Sdf"};
  elim_dumps(words);
  return 0;
}
