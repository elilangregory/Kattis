#include <iostream>

int main(){
    std::string a,b;
    std::cin >> a >> b;
    std::cout << a.length() << " " << b.length();
    if (a.length() >= b.length()){
        std::cout << "go";
        return 0;
    }
    else std::cout << "no";

    return 0;
}