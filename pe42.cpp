#include <iostream>
#include <vector>
#include <string>
#include <fstream>

int main(){
    /*List of triangular numbers in range of ASCII uppercase chars*/
    std::vector<int> {1,3,6,10,15,21,28,36,45,55,66,78};

    std::ifstream myFile("words.txt");

    while(myFile.good()){

        
    }

}

int getPosition(char c){

    if(c >= 'a' && c <= 'z')
        return c - 'a';
    else if(c >= 'A' && c <= 'Z')
        return c - 'A';
    else
        return -1;
}

bool isTriangle(std::string str){

    for(std::string::iterator it = str.begin(); it != str.end(); ++it){
        

    }

}