#include <vector>
#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
    ifstream in(argv[1]);
    ofstream out1(argv[2]);
    ofstream out2(argv[3]);
    
    if (in) {
        istream_iterator<int> in_iter(in), eof;
        ostream_iterator<int> odd_iter(out1, " ");
        ostream_iterator<int> even_iter(out2, " ");
        
        for_each(in_iter, eof, [&](int i){     //流一定要写成引用形式
            i % 2 ? odd_iter = i : even_iter = i;
        });

    } else {
        cerr << "fail to open file " << argv[1] << endl;
    }
    
    
    
    
}
