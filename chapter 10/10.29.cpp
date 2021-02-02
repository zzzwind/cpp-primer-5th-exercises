#include <vector>
#include <iostream>
#include <iterator>
#include <fstream>
using namespace std;

int main(int argc, char **argv) {
    ifstream in(argv[1]);
    if (in) {
        istream_iterator<string> in_iter(in), eof;
        vector<string> word(in_iter, eof);
        for(const auto &c : word)
            cout << c << " ";
        
    }else{
        cerr << "fail to open file " << argv[1] << endl;
    }
    
}
