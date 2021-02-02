#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
  list<int> li;
  for (int i; cin >> i; li.push_back(i)) {}
  auto a = find(li.crbegin(), li.crend(), 0);
  cout << *a << endl;
  return 0;
}
