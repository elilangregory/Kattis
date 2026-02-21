#include <iostream>

using std::string;
using std::cout;

int main(){
    bool a = true;
    bool b = false;
    bool c = false;
    
    string input;
    std::cin >> input;
    
    for (char ch : input){
        if (a && ch == 'A'){
            a = false;
            b = true;
        }
        else if (b && ch == 'A'){
            b = false;
            a = true;
        }
                        
        else if (c && ch == 'B'){
            b = true;
            c = false;
        }
        
        else if (b && ch == 'B'){
            b = false;
            c = true;
        }
        else if (c && ch == 'C'){
            c = false;
            a = true;
        }
        else if (a && ch == 'C'){
            c = true;
            a = false;
        }
    }
    
    if (a) cout << 1;
    if (b) cout << 2;
    if (c) cout << 3;
        
    return 0;
    
}

