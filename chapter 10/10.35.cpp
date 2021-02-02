#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
  vector<int> vec;
  for (int i; cin >> i; vec.push_back(i)) {}
  auto rb_iter = vec.crbegin(), re_iter = vec.crend();
  for(auto i = re_iter.base(); i != vec.cend(); ++i)
    cout << *i << " ";
  cout << endl;
    
}
