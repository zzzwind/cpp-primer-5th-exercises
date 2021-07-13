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
  
 private:
  std::string book_no;
  
 protected:
  double price = 0.0;
};

double print_total(std::ostream &os, const Quote &item, size_t n) {
  double net = item.net_price(n);
  os << "ISBN: " << item.isbn()
     << " # sold: " << n << "total due: " << net << std::endl;
  return net;
}

class DiscQuote : public Quote {
 public:
  DiscQuote() = default;
  DiscQuote(const std::string& book, double price,
            std::size_t qty, double disc)
    : Quote(book, price), quantity(qty), discount(disc) {}
  double net_price(std::size_t) const = 0;
  
 protected:
  std::size_t quantity = 0;
  double discount = 0.0;
};

class BulkQuote : public DiscQuote {
 public:
  BulkQuote() = default;
  BulkQuote(const std::string& book, double p,
            std::size_t qty, double disc)
    : DiscQuote(book, p, qty, disc) {}
  double net_price(std::size_t t) const override;
};

double BulkQuote::net_price(size_t cnt) const {
  if (cnt >= quantity)
    return cnt * (1 - discount) * price;
  else
    return cnt * price;
}

int main() {
  Quote q("sa", 100);
  BulkQuote bq("sb", 100 ,10 ,0.5);
  print_total(std::cout, q, 5);
  std::cout << std::endl;
  print_total(std::cout, bq, 15);
  return 0;
}
