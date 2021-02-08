#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

void read(istream &in, vector<int> *p) {
  int n;
  while (in >> n) {
    p->push_back(n);
  }
}
void print(const vector<int> *p) {
  for (const auto &c : *p)
    cout << c <<" ";
  cout << endl;
  delete p;
}

int main(){
  vector<int> *p = new vector<int>();
  read(cin, p);
  print(p);
  return 0;
}
