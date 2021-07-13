#include <iostream>

class HasPtr {
 public:
  HasPtr(const std::string &str = std::string())
    : ps(new std::string(str)), i(0) {}
  HasPtr(const HasPtr &s) : ps(new std::string(*(s.ps))), i(s.i) {}
  const std::string &get() const { return *ps; }
  
 private:
  int i;
  std::string *ps;
};

int main(){
  HasPtr hp1("heee ");
  HasPtr hp2(hp1);
  
  std::cout << hp1.get() << " " << hp2.get() << std::endl;
  return 0;
}
