#include <vector>
#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
  vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  list<int> li;
//  copy(vec.begin() + 3, vec.begin() + 7, li);
  for_each(vec.begin() + 3, vec.begin() + 7, [&li](int i) { //list 往里面添加元素肯定是要引用啊
    li.push_front(i);
  });
  for (const auto &c : li)
    cout << c << " ";
  cout << endl;
  return 0;
}
