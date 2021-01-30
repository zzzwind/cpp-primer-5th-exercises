#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

struct Sales_data{
    
    Sales_data() = default;
    Sales_data(const string &s) : bookNo(s) {}
    Sales_data(const string &s, unsigned n, double p) :
               bookNo(s), units_sold(n), revenue(p*n) {}
    Sales_data(std::istream &) { read(is, *this); };
    
    string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &read(std::istream &is, Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item){
    os << item.isbn() << " " << item.units_sold << " "
    << item.revenue;
    return os;
}
int main() {
  Sales_data total(std::cin);
  //if (read(std::cin, total)) {
  if (std::cin) {
    Sales_data trans(std::cin);
    //while (read(std::cin, trans)) {
    while (std::cin) {
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
      } else {
        print(std::cout, total) << std::endl;
        total = trans;  // Use default copy constructor
      }
      read(std::cin, trans);  // Read new transaction
    }
    print(std::cout, total) << std::endl;
  } else {
    std::cerr << "No data!" << std::endl;
    return -1;
  }

  return 0;
}
