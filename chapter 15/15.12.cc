#include <iostream>
#include <string>

class Quote {
 public:
  Quote() = default;
  Quote(const std::string &book, double sales_price)
    : book_no(book), price(sales_price) {}
  std::string isbn() const { return book_no; }
  virtual double net_price(std::size_t n) const { return n * price; }
  virtual ~Quote() = default;
  virtual void debug() const { std::cout << "Quote calling"; }
 private:
  std::string book_no;
  
 protected:
  double price = 0.0;
};

class MyQuote : public Quote {
 public:
  MyQuote() = default;
  MyQuote(const std::string& book, double p,
            std::size_t lim, double disc)
    : Quote(book, p), limit(lim), discount(disc) {}
  double net_price(std::size_t t) const override;
  void debug() const override { std::cout << "MyQuote calling"; }
 private:
  std::size_t limit = 0;
  double discount = 0.0;
};

double MyQuote::net_price(size_t cnt) const {
  if (cnt >= limit)
    return limit * (1 - discount) * price + (cnt - limit) * price;
  else
    return limit * (1 - discount) * price ;
}

double print_total(std::ostream &os, const Quote &item, size_t n) {
  double net = item.net_price(n);
  os << "ISBN: " << item.isbn()
     << " # sold: " << n << "total due: " << net << std::endl;
  return net;
}
void print(const Quote &item) {
  item.debug();
}

int main() {
  Quote q("sa", 100);
  MyQuote bq("sb", 100 ,10 ,0.5);
  print(q);
  print(bq);
  return 0;
}
