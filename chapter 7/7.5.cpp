#include<iostream>
#include<string>

using std::string

struct Person{
    
    string getName() const { return name; }
    string getAddress() { return address; }
    string name;
    string address;
}
