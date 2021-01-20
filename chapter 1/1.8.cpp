
#include <iostream>

int main() {
//  std::cout << "/*";
//  std::cout << "*/";
//  std::cout << /* "*/" */;
  std::cout << /*  "*/" /*  "/*"  */;
  return 0;
}

//正确

//正确

//错误 warning: missing terminating '"' character           [-Winvalid-pp-token]
//std::cout << /* "*/" */;             
//                   ^
//正确
