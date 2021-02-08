#include <iostream>
#include <string>

using namespace std;

int main(){
  const char *c1 = "hello";
  const char *c2 = "world";
  char *c3 = new char[strlen(c1) + strlen(c2) + 1];
  strcpy(c3, c1);
  strcat(c3, c2);
  cout << c3 << endl;
  delete [] c3;
  
  string s1("hello");
  string s2("world");
  string s3 = s1 + s2;
  cout << s3 << endl;
  return 0;
}
