#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char *argv[]){
    std::ifstream in(argv[1]);
    if (in) {
        string str;
        std::vector<string> v;
        while (std::getline(in,str)) {
            v.push_back(str);
        }
        string word;
        for(auto &c : v){
            std::istringstream iss(c);
            
            for(;iss>>word;)
            cout << word << '\t';
            cout << endl;
        }
    }else{
        std::cerr << "fail to open " << argv[0] << endl;
    }
   
    return 0;
}
