#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

    string b;
    getline(cin,b);
    int a = stoi(b);
    string input;
    std::vector<string> qaly;
    for (int i = 0; i < a; i++){
        getline(cin,input);
        int j = 0;
        int k = 0;

        for (char ch : input){
            if (ch == ' '){
                qaly.push_back(input.substr(j,k-j));
            j = k + 1;
            }
            k++;
        }
        qaly.push_back(input.substr(j,input.size()-1));
    }
    float sum = 0;
    cout << qaly.size() << endl;
    for (int i = 0; i < qaly.size(); i+=2) {
        cout << i << endl;
        sum += stof(qaly.at(i))*stof(qaly.at(i+1));

    }

    cout << sum << endl;

    return 0;

}

