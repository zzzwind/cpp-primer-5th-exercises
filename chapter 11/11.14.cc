#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>
#include <utility>

using namespace std;

//实现思路：map<string, vector<string>>，add_family()添加家庭，
//必须先检查是否存在这个家庭，
//否则，若不做检查，则可能将已有家庭的孩子名字清空。
//若确实没有这个家庭，则创建一个空的vector<string>,表示这个家庭的孩子名字列表。
//函数add_child()向一个已有家庭添加孩子的名字:首先用[]运算符取出该对象的vector，
//然后调用push_back()将名字追加到vector末尾。

void add_family(map<string,vector<pair<string, string>>> &families,
                const string &name) {
  if(families.find(name) == families.end()) {   //没有找到就返回尾后迭代器, 以此作为判断条件
    families[name] =  vector<pair<string, string>>();          //隐式构造返回值
  }
}
void add_child(map<string,vector<pair<string, string>>> &families,
               const string &name, const string &child_name,
               const string &birth) {
  families[name].push_back({child_name, birth});  //families[name] 就是name所对应的vector
}

int main() {
  map<string, vector<pair<string, string>>> families;
  
  add_family(families, "张");
  add_family(families, "王");
  add_child(families, "张", "三","2020/1/1");
  add_child(families, "张", "思","2020/1/1");
  add_child(families, "王", "无","2020/1/1");

  for (const auto &c : families) {
    cout << c.first << " 家有: ";
    for (const auto &v : c.second)
      cout << c.first << v.first << " 生日为: " << v.second;
    cout << endl;
  }
   
  
  return 0;
}
