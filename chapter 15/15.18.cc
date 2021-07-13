#include<iostream>

class Base {
public:
  void pub_mem();

protected:
  int prot_mem;
  
private:
  char priv_mem;
};

struct Pub_Derv : public Base {
  int f1() const { return prot_mem; }
  
//  char g() { return priv_mem; }   //不可以访问
};

struct Priv_Derv : private Base {
  int f1() const { return prot_mem; }
};

struct Prot_Derv : protected Base {
  int f1() const { return prot_mem; }
};

struct Derived_from_Public : public Pub_Derv {
  int use_base() { return prot_mem; } //正确, 公有继承后的还是可以访问
};

struct Derived_from_Private : public Priv_Derv {
//  int use_base() { return prot_mem; } //错误, 已经是我的私有物了你在想访问可不行哦
};

struct Derived_from_Protected : public Prot_Derv {
//  int use_base() { return prot_mem; } //错误, 已经是我的私有物了你在想访问可不行哦
};


int main() {
  Pub_Derv d1;
  Priv_Derv d2;
  Prot_Derv d3;
  Derived_from_Public dd1;
  Derived_from_Private dd2;
  Derived_from_Protected dd3;

//  只有公有继承才可以将派生类向基类转换
//  Base *p = &d1;   //可以
//  Base *p = &d2;   //不可以
//  Base *p = &d3;   //不可以
//  Base *p = &dd1;  //可以
//  Base *p = &dd2;  //不可以
//  Base *p = &dd3;  //不可以
  return 0;
}


