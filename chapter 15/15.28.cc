#include <iostream>
#include <string>
#include <vector>

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
  using DiscQuote::DiscQuote;
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
  BulkQuote bq1("sb1", 100 ,10 ,0.5);
  BulkQuote bq2("sb2", 110 ,20 ,0.5);
  BulkQuote bq3("sb3", 120 ,30 ,0.5);
  BulkQuote bq4("sb4", 130 ,40 ,0.5);
  
  
  std::vector<std::shared_ptr<Quote>> basket;
  
  basket.push_back(std::make_shared<BulkQuote>("s1", 100, 10, .25));
  basket.push_back(std::make_shared<BulkQuote>("s2", 120, 20, .25));
  basket.push_back(std::make_shared<BulkQuote>("s3", 140, 30, .25));
  basket.push_back(std::make_shared<BulkQuote>("s4", 160, 40, .25));
  int count = 0;
  for(auto i : basket)
    count += i->net_price(50);
  std::cout << "totoal " << count << std::endl;
  return 0;
}
