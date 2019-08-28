#include <iostream>

int isPytho(int,int, int);

int main(){
    int product;
    for(int c = 1; c <= 1000; c++){
        for (int b = 1; b < c; b++){
            for (int a=1; a<b; a++){
                if(isPytho(a,b,c) && a+b+c == 1000)
                    product = a*b*c;
            }        
                
        }
    }
    std::cout << product << std::endl;

}

int isPytho(int a, int b, int c){
    return (a*a + b*b == c*c);
}