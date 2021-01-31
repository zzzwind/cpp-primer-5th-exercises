#include <vector>
#include <list>
#include <iostream>
#include <string>

int main() {
    
    std::list<char *> li = {"sd", "sdfsd", "dfsfs"};
    std::vector<std::string> vs;
    
    vs.assgin(li.begin(), li.end());
    
    return 0;
}
