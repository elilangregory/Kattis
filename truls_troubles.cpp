#include <iostream>
#include <string>

int main(){
    std::string input;
    std::cin >> input;

    int truls = 0;
    int henry = 0;


    for (char ch : input){
        if (ch == 'T'){
            truls++;
        }
        if (ch == 'H'){
            henry++;
        }
        int diff = std::abs(truls-henry);
        if (truls >=11 && diff >=2){
            truls = 0;
            henry = 0;
        }
        if (henry >=11 && diff >=2){
            truls = 0;
            henry = 0;
        }
    }
    
    std::cout << truls << "-" << henry;
    
    return 0;
    

}