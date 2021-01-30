#include<iostream>
#include<string>

using std::string

struct Person{
    
    string getName() const { return name; }
    string getAddress() { return address; }
    string name;
    string address;
}

std::istream &read(std::istream &is, Person &p){
    is >> p.name >> p.address;
    return is;
}
std::ostream &print(std::ostream &os, Person &p){
    os << p.name << " " << p.address;
    return os;
}
