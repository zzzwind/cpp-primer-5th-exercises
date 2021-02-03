#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>

using namespace std;


int main() {
  multimap<string, string> families;
  
  families.insert({"张", "三"});
  families.insert({"张", "思"});
  families.insert({"张", "无"});
  families.insert({"王", "三"});
  families.insert({"王", "科技"});
  families.insert({"王", "是的"});
  
  for (const auto &c : families)
    cout << c.first << c.second << endl;
  
  return 0;
}
