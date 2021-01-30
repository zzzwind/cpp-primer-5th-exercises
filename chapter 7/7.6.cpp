#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

struct Sales_data{
    
    string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream &read(istream &is, Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item){
    os << item.isbn() << " " << item.units_sold << " "
    << item.revenue << " " << item.avg_price();
    return os;
}
