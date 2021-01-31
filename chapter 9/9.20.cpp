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
    std::list<int> li = {1,3,3,4,5,6};
    std::deque<int> odds;
    std::deque<int> evens;
    
    for(const auto &c : li){
        if (c % 2 == 1) {
            evens.push_back(c);
        }else{
            odds.push_back(c);
        }
    }
    cout << "odd" << endl;
    print(odds);
    cout << endl; 
    cout << "even" << endl;
    print(evens);
    
    return 0;
}
