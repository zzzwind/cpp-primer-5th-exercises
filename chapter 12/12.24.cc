#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

int main(){
  string str;
  cin >> str;
  char *p = new char[str.size() + 1];
  strcpy(p, str.c_str());
  cout << p << endl;
  delete [] p;
  return 0;
}
