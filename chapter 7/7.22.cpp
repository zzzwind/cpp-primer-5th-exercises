#include<iostream>
#include<string>

using std::string

class Person{
    friend std::istream &read(std::istream &, Person &);
    friend std::ostream &print(std::ostream &, Person &);
public:

    Person() = default;
    
    Person(const string &na, const string &ad ) : name(na), address(ad) { }
    
    string getName() const { return name; }
    string getAddress() { return address; }
private:
    string name;
    string address;
};

std::istream &read(std::istream &is, Person &p){
    is >> p.name >> p.address;
    return is;
}
std::ostream &print(std::ostream &os, Person &p){
    os << p.name << " " << p.address;
    return os;
}
