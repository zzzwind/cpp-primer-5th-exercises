#include <vector>
#include <list>
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

int main() {
    std::list<std::string> words;
    std::string word;
    while (std::cin >> word) {
        words.push_back(word);
    }
    
    auto begin = words.cbegin(), end = words.cend();
    while (begin != end) {
        std::cout << *begin << std::endl;
        ++begin;
    }
    return 0;
}
