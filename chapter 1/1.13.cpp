#include <iostream>

int main1(){
    int sum = 0;
    for (int i = 50; i<= 100; ++i) {
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}

int main2(){

    for (int i = 10; i>= 0; --i) {
        std::cout << i << std::endl;
    }
    return 0;
}

int main(){
    int begin, end;
    std::cout << "Input two numbers: ";
    std::cin >> begin >> end;
    for (int i = begin; i<= end; ++i) {
        std::cout << i << std::endl;
    }
  
    return 0;
}


