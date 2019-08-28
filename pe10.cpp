#include <iostream>


bool isPrime(int);

int main(){
    long long sum = 0;
    int idx = 1;
    while (idx < 2000000)
    {
        if(isPrime(idx))
            sum += idx;
        idx++;
    }
    std::cout << sum << std::endl;
    

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