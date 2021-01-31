#include <iostream>
#include <string>
#include <forward_list>
using std::cout;
using std::cin;
using std::endl;


int main() {
    
    std::forward_list<int> li = {1,2,3,4,5,6,7,8,9,0};
    
    auto prev = li.before_begin();
    auto curr = li.begin();
    
    while (curr != li.end()) {
        if(*curr %2 == 1)
            curr = li.erase_after(prev);
        else{
            prev = curr;
            ++curr;
            
        }
    }
    
    for(const auto &c : li){
        cout << c << ' ';
    }
  
    return 0;
}
