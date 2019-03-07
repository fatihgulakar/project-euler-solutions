#include <iostream>
#include <cmath>

auto phi = 1.6180339887;
auto psi = -0.6180339887;
double binet(int n);
int main(){
    auto i = 0;
    long long sum = 0;

    while(binet(i)<4000000){
        auto temp = binet(i);
        if(std::fmod(temp, 2) == 0)
            sum += temp;
        i++;
    }
    std::cout << sum << std::endl;
}
// Binet's n-th number of Fibonacci formula
double binet(int n){
    return round((pow(phi, n) - pow(psi, n))/2.2360679774);
} 