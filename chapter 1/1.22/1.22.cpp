#include<iostream>
#include "Sales_item.h"

int main(){
    Sales_item total;
    if (std::cin>>total) {
        Sales_item trans;
        while (std::cin>>trans) {
            if (total.isbn() == trans.isbn()) {
                total+=trans;           //累加
            }else{
                std::cout<<total<<std::endl;  //上一本书的结果
                total = trans; //下一本书开始
            }
        }
        std::cout<<total<<std::endl;
    }else{
        std::cerr<<"no data"<<std::endl;
        return -1;
    }
    return 0;
}
