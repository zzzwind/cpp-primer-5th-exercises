#include <iostream>
#include <string>

using  namespace std;

class Employee {
 public:
  Employee() { id = eid++; }
  Employee(const string &s) : name(s) { id = eid++; }
  const std::string &getName() const { return name; }
   int getID() const { return id; }
 private:
  std::string name;
  static int eid;
  int id;
};

int Employee::eid = 0;

int main() {
  Employee e1;
  Employee e2("jack");
 std::cout << e1.getName() << " " << e1.getID() << std::endl;
  std::cout << e2.getName() << " " << e2.getID() << std::endl;
  return 0;
}
