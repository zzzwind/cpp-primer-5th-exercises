#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class HasPtr {
  friend void swap(HasPtr&, HasPtr&);
 public:
  HasPtr(const std::string &s = std::string())
    : ps(new std::string (s)), i(0) {}
  HasPtr(const HasPtr &p)
    : ps(new std::string(*p.ps)), i(p.i) {}
  HasPtr& operator=(const HasPtr&);
  bool operator<(const HasPtr&);
  ~HasPtr();

 const std::string GetName() const { return *ps; }

 private:
  std::string *ps;
  int i;
};

inline void swap(HasPtr &lhs, HasPtr &rhs) {
  std::cout << "swap(HasPtr &lhs, HasPtr &rhs) between <" << *lhs.ps
       << "> and <" << *rhs.ps << ">" << std::endl;

  using std::swap;
  swap(lhs.ps, rhs.ps);
  swap(lhs.i, rhs.i);
}

HasPtr::~HasPtr() {
  delete ps;
}

HasPtr& HasPtr::operator=(const HasPtr &rhs) {
  if (this == &rhs)
    return *this;
  delete ps;
  ps = new std::string(*rhs.ps);
  i = rhs.i;
  return *this;
}

bool HasPtr::operator<(const HasPtr &rhs) {
  return *ps < *rhs.ps;
}


int main() {

  HasPtr p1("ss");
  HasPtr p2("hh");
  HasPtr p3("mm");
  std::vector<HasPtr> pv{p1, p2, p3};
  
  std::sort(pv.begin(), pv.end());   //编译出错, 不知是什么原因, 后面再说.
  
  std::cout << pv[1].GetName() << std::endl;
  return 0;
}
