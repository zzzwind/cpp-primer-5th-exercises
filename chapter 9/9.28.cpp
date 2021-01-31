#include <iostream>
#include <string>
#include <forward_list>
using std::cout;
using std::cin;
using std::endl;


void func(std::forward_list<std::string> &li, const std::string &s1, const std::string &s2){
    
    auto prev = li.before_begin();
    auto curr = li.begin();
    while (curr != li.end()) {
        if (*curr == s1) {
           li.insert_after(curr, s2);
            return;
        }else
            prev = curr++;
    }
    li.insert_after(prev, s2); //经历一轮循环后已经到末尾,prev指向最后一个元素, curr指向最后一个的再后面一个不存在的位置的元素.
}

int main() {
    std::forward_list<std::string> li = {"apple", "banana", "melon"};
    
    for(const auto &c : li){
        cout << c << ' ';
    }
    cout << endl;
    
    func(li,std::string("banana"), std::string("pp"));
    
    for(const auto &c : li){
        cout << c << ' ';
    }
    return 0;
}
