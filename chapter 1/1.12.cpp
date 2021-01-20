#include <iostream>

/*
 * 从 -100 一直 累加到 100
 * sum 结果为 0
 */

int main(){
    int sum = 0;
    for (int i = -100; i<=100; ++i) {
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}
