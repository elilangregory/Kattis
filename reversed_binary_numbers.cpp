#include <iostream>

std::string DecimalToBinary(int n){
    if (n==0){return "0";}

    std::string binary = "";
    while (n > 0){

        int bit = n%2;
        binary.push_back('0'+ bit);
        n/=2;
    }

    return binary;
}

int main(){

    int a; 
    std::cin >> a;
    int decimal = stoi(DecimalToBinary(a),nullptr, 2);
    std::cout << decimal;


}