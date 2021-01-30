#include<iostream>
#include<string>

using std::string

class Screen{
public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(""){}
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){}
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};
