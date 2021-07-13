#include <iostream>

class HasPtr {
 public:
  HasPtr(const std::string &str = std::string())
    : ps(new std::string(str)), i(0) {}
  HasPtr(const HasPtr &s) : ps(new std::string(*(s.ps))), i(s.i) {}
  const std::string &get() const { return *ps; }
  HasPtr& operator=(const HasPtr &);
  
 private:
  int i;
  std::string *ps;
};
HasPtr& HasPtr::operator=(const HasPtr &hp) {
  if (this == &hp)
    return *this;
  i = 0;
  *ps = "";
  i = hp.i;
  *ps = *(hp.ps);
  return *this;
}

int main(){
  HasPtr hp1("heee ");
  HasPtr hp2(hp1);
  HasPtr hp3("SSSS");
  hp2 = hp3;
  
  std::cout << hp1.get() << " " << hp2.get() << " " << hp3.get() <<std::endl;
  return 0;
}
