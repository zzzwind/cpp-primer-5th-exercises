#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>

using namespace std;

//实现思路：map<string, vector<string>>，add_family()添加家庭，
//必须先检查是否存在这个家庭，
//否则，若不做检查，则可能将已有家庭的孩子名字清空。
//若确实没有这个家庭，则创建一个空的vector<string>,表示这个家庭的孩子名字列表。
//函数add_child()向一个已有家庭添加孩子的名字:首先用[]运算符取出该对象的vector，
//然后调用push_back()将名字追加到vector末尾。

void add_family(map<string, vector<string>> &families, const string &name) {
  if(families.find(name) == families.end()) {   //没有找到就返回尾后迭代器, 以此作为判断条件
    families[name] = vector<string>();
  }
}
void add_child(map<string, vector<string>> &families, const string &name,
               const string &child_name) {
  families[name].push_back(child_name);  //families[name] 就是name所对应的vector
}

int main() {
  map<string, vector<string>> families;
  
  add_family(families, "张");
  add_child(families, "张", "强");
  add_child(families, "张", "刚");
  add_child(families, "王", "五");
  add_family(families, "王");

   for (auto f : families) {
       cout << f.first << "家的孩子:";
       for (auto c : f.second) {
           cout << c << " ";
       }
       cout << endl;
   }
  return 0;
}
