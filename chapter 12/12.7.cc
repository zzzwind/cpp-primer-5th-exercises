#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

typedef shared_ptr<vector<int>> pv;

void read(istream &in, pv p) {
  int n;
  while (in >> n) {
    p->push_back(n);
  }
}
void print(const pv p) {
  for (const auto &c : *p)
    cout << c <<" ";
  cout << endl;
}

int main(){
  pv p = make_shared<vector<int>>(); 
  read(cin, p);
  print(p);
  return 0;
}
