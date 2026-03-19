#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    string input;

    for (int i = 0; i < n; i++){
        cin >> input;

        char plus = '+';
        char equal = '=';
        int sub = input.find(plus);


        if (input.find(plus) != -1){
            int a = stoi(input.substr(0,sub));
            int b = stoi(input.substr(sub));
            cout << a + b << endl;
            continue;
        }
        
        if (input.find(equal) != -1){
            cout << "skipped" << endl;
            continue;
        }




    }

}