#include <iostream>

int main(){
    int  begin, end;
    std::cout << "Input two numbers: ";
    std::cin >> begin >> end;
    while (begin <= end) {
        std::cout << begin << std::endl;
        ++begin;
    }
  
    return 0;
}
