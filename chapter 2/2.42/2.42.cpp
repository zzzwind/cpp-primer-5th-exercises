#include <iostream>
#include <string>
#include "Sales_data.h"

//ex 1.20
int main1(){
    Sales_data data;
    double price = 0.0;
    while (std::cin >> data.bookNo >> data.units_sold >> price) {
        data.revenue = data.units_sold * price;
        std::cout << data.bookNo << " " << data.units_sold << " " << price << std::endl;
    }
    return 0;
}

//ex1.21
int main2(){
    Sales_data data1, data2;
    double price = 0;
    
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    
    if (data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
        if (totalCnt != 0) {
            std::cout << totalRevenue/totalCnt << std::endl;
        }else{
            std::cout << "(no sales)" << std::endl;
        }
        return 0;
    }else{
        std::cerr << "Data must refer to the same isbn" << std::endl;
        return -1;
    }
}

//ex1.22
int main() {
    Sales_data total;
    double price = 0;
    if (std::cin >> total.bookNo >> total.units_sold >> price) {
        total.revenue = total.units_sold * price;
        Sales_data trans;
        while (std::cin >> trans.bookNo >> trans.units_sold >> price) {
            trans.revenue = trans.units_sold * price;
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }else{
                std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
                if (total.units_sold != 0)
                          std::cout << total.revenue / total.units_sold << std::endl;
                        else
                          std::cout << "(no sales)" << std::endl;
                        total.bookNo = trans.bookNo;
                        total.units_sold = trans.units_sold;
                        total.revenue = trans.revenue;
                
            }
        }
        std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
        if (total.units_sold != 0)
          std::cout << total.revenue / total.units_sold << std::endl;
        else
          std::cout << "(no sales)" << std::endl;
        
        return 0;
    }else{
        std::cerr << "no data" << std::endl;
        return -1;
    }
}


//剩下的练习类似,不写了...



