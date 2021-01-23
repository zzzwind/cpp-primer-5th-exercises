#include<cstddef>
#include<vector>

int main() {
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    int b[10];
    
    for(size_t i = 0; i < 10; ++i)
        b[i] = a[i];
    
    std::vector<int> v;
    for(auto i : a)
        v.push_back(i);
    return 0;
}
