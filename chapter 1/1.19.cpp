#include <iostream>

int main(){
    int  begin, end;
    std::cout << "Input two numbers: ";
    std::cin >> begin >> end;
    int temp;
    
    //交换两个数
    if (begin >= end) {
        temp = begin;
        begin = end;
        end = temp;
    }
    while (begin <= end) {
        std::cout << begin << std::endl;
        ++begin;
    }
  
    return 0;
}
