#include <iostream>

using namespace std;


int main(){

    int n;
    cin >> n;

    string input1;
    string input2;

    for (int i = 0; i < n; i++){

        cin >> input1 >> input2;
        cout << input1 << "\n" << input2 << "\n";
        int length = input1.size();

        for (int j = 0; j < length; j++){
            if (input1[j]==input2[j]) cout << ".";
            else cout << "*";
        }
        cout << "\n";
    }

}