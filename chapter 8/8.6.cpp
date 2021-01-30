#include<iostream>
#include<string>
#include<fstream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Sales_data{

    friend Sales_data add(const Sales_data &, const Sales_data &);
    friend std::istream &read(std::istream &, Sales_data &);
    friend std::ostream &print(std::ostream &, const Sales_data &);
public:
    Sales_data() = default;
    Sales_data(const string &s) : bookNo(s) {}
    Sales_data(const string &s, unsigned n, double p) :
               bookNo(s), units_sold(n), revenue(p*n) {}
    Sales_data(std::istream &is) { read(is, *this); };
    
    string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
private:
    double avg_price() const{
        return units_sold ? revenue/units_sold : 0;
    }
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
int main(int argc , char *argv[]) {
    
    std::ifstream in(argv[1]);
    
    if (in) {
        string s;
        while (std::getline(in,s)) {
            Sales_data total;
            if (read(in, total)) {
                Sales_data trans;
              while (read(in, trans)) {
                if (total.isbn() == trans.isbn()) {
                  total.combine(trans);
                } else {
                  print(cout, total) << endl;
                  total = trans;  // Use default copy constructor
                }
              }
              print(cout, total) << endl;
            } else {
              std::cerr << "No data!" << endl;
              return -1;
            }
        }
    }else{
        std::cerr << "fail to open file" << endl;
    }
    
    return 0;
 
}
