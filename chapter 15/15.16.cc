#include<iostream>
#include<string>

using namespace std;

class Quote {
public:
  Quote() = default;
  Quote(const string &book, double sales_price)
    : book_no(book), price(sales_price) {}
  string isbn() const { return book_no; }
  virtual double net_price(size_t n) const { return n * price; }
  virtual ~Quote() = default;
  
private:
  string book_no;
                           
protected:
  double price = 0.0;
};

double print_total(ostream &os, const Quote &item, size_t n) {
  double net = item.net_price(n);
  os << "ISBN: " << item.isbn()
     << " # sold: " << n << "total due: " << net << endl;
  return net;
}

class Disc_quote : public Quote {
public:
  Disc_quote() = default;
  Disc_quote(const string &book, double price, size_t qty, double disc)
    : Quote(book, price), quantity(qty), discount(disc) {}
  double net_price(size_t) const = 0;
protected:
  size_t quantity = 0;
  double discount = 0.0;
};


class My_quote : public Disc_quote {
public:
  My_quote() = default;
  My_quote(string book, double price, size_t qty, double disc)
    : Disc_quote(book, price, qty, disc) {}
  double net_price(size_t) const override;
};

double My_quote::net_price(size_t n) const {
  if(n >= quantity)
    return n * (1 - discount) * price;
  else
    return n * price;
}

int main() {
  My_quote q("fuck", 10, 100, 0.1);
  print_total(cout, q, 50);    //具体数量要由用户给出而不是写死到类中.
  return 0;
}
