#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    
    string input;
    getline(cin, input);
    std::vector<string> words;

    int i = 0;
    int j = 0;

    for (char ch : input){
        if (ch == ' '){
            words.push_back(input.substr(j,i-j));
            j = i + 1;
        }
        i++;
    }
    words.push_back(input.substr(j,input.size()-j));


    cout << 1-stoi(words.at(0)) << " " << 1-stoi(words.at(1)) << " "
    << 2-stoi(words.at(2)) << " " << 2-stoi(words.at(3)) << " "
    << 2-stoi(words.at(4)) << " "<< 8-stoi(words.at(5)) << endl;



    return 0;
}