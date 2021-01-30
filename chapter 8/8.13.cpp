#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

struct PersonInfo {
    string name;
    vector<string> phones;
};

void print(const PersonInfo &p){
    cout << p.name << '\t';
    for(const auto &c : p.phones)
        cout << c <<'\t';
    cout << endl;
}

int main(int argc, char *argv[]){
    
    string line, word;
    vector<PersonInfo> people;
    
    std::ifstream in(argv[1]);
    if (in) {
        while (std::getline(in, line)) {
            PersonInfo info;
            std::istringstream record(line);
            record >> info.name;
            while (record >> word) {
                info.phones.push_back(word);
            }
            people.push_back(info);
        }
    }else{
        std::cerr << "fail to open " << argv[1] << endl;
    }
    for(const auto &c : people)
        print(c);
    
    return 0;
}
