#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(){
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade)
      ++*(scores.begin() + grade / 10);
    
    return 0;
}
