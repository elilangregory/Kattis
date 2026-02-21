#include <iostream>

using std::string;
using std::cout;
using std::cin;


int main(){
    std::string input, output;
    cin >> input >> output;
    int length = input.length();
    int counter = 0;
    for (int i = 0; i < length; i++){
        if (input[i]!=output[i]){
            counter++;
        }
    }
   cout << counter + 1;


}