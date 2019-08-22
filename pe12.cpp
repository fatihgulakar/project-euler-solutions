#include <iostream>

int getTriangleSum(int);
int numDivisor(int);

int main(){

    int maxDiv = 0;
    int i = 0;
    int trig;
    while(maxDiv <= 500){
        trig = getTriangleSum(i);
        int temp = numDivisor(trig);

        if(temp > maxDiv)
            maxDiv = temp;
        
        i++;
    }
    std::cout << trig << std::endl;

}

// Returns the sum of 1+2+...n
int getTriangleSum(int n){
    return n*(n+1)/2;
}

// Returns the number of divisors of a natural number.
int numDivisor(int n){
    int limit = n;
    int count = 2;

    for (int i=2; i< limit; i++){
        /*If i is divisible reduce the loop limit by factor of i
        and increase the divisor counter by 2 (i and n/i)*/
        if(n % i == 0){
            count += 2;
            limit = n/i;
        }
    }
    return count;
}