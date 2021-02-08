#include "query_result.h"
#include "text_query.h"
#include <iostream>
#include <fstream>
#include <string>

void RunQueries(std::ifstream &infile) {
  TextQuery tq(infile);
  while (true) {
    std::cout << "enter word to look for, or q to quit: ";
    std::string s;
    if (!(std::cin >> s) || s == "q") break;
    print(std::cout, tq.query(s)) << std::endl;
  }
}

int main(int argc, char **argv){
  std::ifstream in(argv[1]);
  if (in)
    RunQueries(in);
  else
   std::cerr << "fail to open file" << std::endl;
  return 0;
}
