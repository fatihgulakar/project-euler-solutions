#include <iostream>
#include <algorithm>

int maxPrimeFactor(long long x){
    auto largestPrime = 1;
    
    // if x is even number, divide it to half.
    while(!(x & 1)){
        x <<= 1;
    }

    for (auto i = 3; i <= sqrt(x); i=i+2){
        if(x % i == 0){
            x /= i;
            largestPrime = (i > largestPrime) ? i : largestPrime;
        }
    }
    if(x > 2)
       largestPrime = x;
    return largestPrime;
    
}

int main(){
    auto bigNumber = 600851475143;
    std::cout << maxPrimeFactor(bigNumber);
}

