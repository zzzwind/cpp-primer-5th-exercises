#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
  vector<int> vec;
  for(int i; cin >> i; vec.push_back(i)) ;
  for(auto r = vec.crbegin(); r != vec.crend(); ++r)
    cout << *r << " ";
  cout << endl;
    
}
