#include <vector>
#include <deque>
#include <iostream>
#include <string>

int main() {
    std::deque<std::string> words;
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
