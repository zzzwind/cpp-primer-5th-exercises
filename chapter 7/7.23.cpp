#include<iostream>
#include<string>

using std::string

class Screen{
public:
    typedef string::size_type pos;
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};
