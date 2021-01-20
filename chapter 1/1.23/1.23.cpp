#include<iostream>
#include "Sales_item.h"

int main(){
    Sales_item total; //某条书目一共出现的个数
    if (std::cin>>total) { //读入第一条,确保有数据可以处理
        int count = 1;     //统计变量
        Sales_item trans;  //遍历的变量
        while (std::cin>>trans) {  //读取剩余的记录
            if (total.isbn() == trans.isbn()) {
                ++count;           //编号相同时自增
            }else{                 //打印前一本书的结果
                std::cout<<total<<" "<<count<<" records"<<std::endl;
                count = 1;         //重置
                total = trans;     //下一本书
            }
        }
        std::cout<<total<<" "<<count<<" records"<<std::endl; //打印最后一本书的结果
    }else{
        std::cerr<<"no data"<<std::endl;  //处理失败情况
        return -1;
    }
    return 0;
}
