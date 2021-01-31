#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <deque>
using std::cout;
using std::cin;
using std::endl;

void print(std::deque<int> que){
    for(const auto &c : que)
        cout << c << '\t';
}

int main() {
    int ia[] = {0, 1,1,2,3,5,8,13,21,55,89};
    std::vector<int> v(begin(ia), end(ia));
    std::list<int> li(begin(ia), end(ia));
   
    auto it1 = v.begin();
    auto it2 = li.begin();
    while (it1 != v.end()) {
        if(*it1 %2 == 0)
            it1 = v.erase(it1);
        else
            ++it1;
    }
    
    while (it2 != li.end()) {
        if(*it2 %2 == 1)
            it2 = li.erase(it2);
        else
            ++it2;
    }
    
    
    
    return 0;
}
