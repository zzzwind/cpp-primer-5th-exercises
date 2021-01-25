#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::cerr;

//参照第一章的例子
int main(){
    
    string total;  //用来存储出现次数最多的字符串
    if (cin >> total) {
        int totalCnt = 1;  //计数
        string trans;      //用于循环
        string res = total; //结果字符串
        int max = 1;
        while (cin >> trans) {
            if (total == trans) {
                ++totalCnt;
                if (totalCnt > max) {
                    max = totalCnt;
                    res = trans;
                }
            }else{
                total = trans;  //新的字符串, 重新开始
                totalCnt = 1;
            }
        }
        cout << res << max << endl;
    }else
        cerr << " No data" << endl;
    
    return 0;
}
