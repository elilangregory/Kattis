#include <iostream>
#include <string>
#include <cstddef>


int main(){

    std::string input;
    std::cin >> input;

    std::string key (".");
    std::size_t found = input.rfind(key);

    std::cout <<  input.substr(found);

}