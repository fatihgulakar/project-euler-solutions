#include <iostream>
#include <vector>
#include <numeric>
int main(){

    std::vector<int> v(20);
    std::iota(v.begin(), v.end(), 1);
    auto result = 1;
    
    for(auto s : v){
        result = result*s;
        for(auto &e : v){
            if(e % s == 0)
                e = e/s;
        }
    }
    std::cout << result;

}