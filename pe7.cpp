#include <iostream>

bool isPrime(int);

int main(){
    int idx = 1;
    long long lastPrime = 0, tmpVal = 1;
    while(idx <= 10001){
        if(isPrime(tmpVal)){
            lastPrime = tmpVal;
            idx ++;
        }
        tmpVal++;
    } 

    std::cout << lastPrime << std::endl;
}


bool isPrime(int n){
    if(n == 1)
        return false;
    else{
        int i = 2;
        while(i*i <= n){
        if (n % i == 0)
            return false;
        i++; 
        }
    }
    return true;
    
}