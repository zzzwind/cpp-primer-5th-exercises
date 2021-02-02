#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
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


int main(int argc, char **argv) {
    std::ifstream in(argv[1]);
    if (in) {
        std::vector<Sales_data> vsd;
        Sales_data sd;
        while (read(in, sd)) {
            vsd.push_back(sd);
        }
        std::cout << "Before sort:\n";
         for (const auto &sd : vsd)
           print(std::cout, sd) << std::endl;
        std::sort(vsd.begin(), vsd.end(), [](Sales_data &a, Sales_data &b){return a.isbn() < b.isbn();});
         std::cout << "\nAfter sort:\n";
         for (const auto &sd : vsd)
           print(std::cout, sd) << std::endl;

    }else{
        std::cerr << "fail to open " << argv[1];
    }
    return 0;
}
