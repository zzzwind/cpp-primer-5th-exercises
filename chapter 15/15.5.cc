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
  double price = 0.0
};

double print_total(ostream &os, const Quote &item, size_t n) {
  double net = item.net_price(n);
  os << "ISBN: " << item.isbn()
     << " # sold: " << n << "total due: " << ret << endl;
  return net;
}

class BulkQuote : public Quote {
 public:
  BulkQuote() = default;
  BulkQuote(const std::string& book, double p,
            std::size_t qty, double disc)
    : Quote(book, p), min_qty(qty), discount(disc) {}
  double net_price(std::size_t t) const override;
  
 private:
  std::size_t min_qty = 0;
  double discount = 0.0;
};

double BulkQuote::net_price(size_t cnt) const {
  if (cnt >= min_qty)
    return cnt * (1 - discount) * price;
  else
    return cnt * price;
}
