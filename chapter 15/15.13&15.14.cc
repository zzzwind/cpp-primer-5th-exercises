#include<iostream>
#include<string>


class base {
 public:
  base() = default;
  base(const std::string &name) : basename(name) {}
  std::string name() { return basename; }
  virtual void print(std::ostream &os) { os << basename; }
 private:
  std::string basename;
};

class derived : public base {
 public:
  derived() = default;
  derived(const std::string &name, int index) : base(name), i(index) {}
  void print(std::ostream &os) { base::print(os); os << " " << i << std::endl; }
 private:
  int i;
};

int main() {

  base bobj("ss");
  base *bp1 = &bobj;
  base &br1 = bobj;
  derived dobj("sss", 1);
  base *bp2 = &dobj;
  base &br2 = dobj;

//  bobj.print(std::cout); //调用base的print函数
//  dobj.print(std::cout); //调用derived的print函数
//  std::cout << bp1->name(); //调用base的name()函数
//  std::cout << bp2->name();  //调用从base继承过来的name()函数
//  br1.print(std::cout);   // 调用base的print函数
  br2.print(std::cout);  //调用derived的print
  
  return 0;
}
