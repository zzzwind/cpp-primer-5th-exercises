
#include <vector>
#include <list>
#include <string>
#include <iostream>

int main() {
    std::vector<int> v(10, 1);
    std::list<int> li(10, 1);
    std::fill_n(v.begin(), v.size(), 0);
    std::fill_n(li.begin(), li.size(), 0);
  return 0;
}
