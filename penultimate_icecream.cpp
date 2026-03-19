#include <iostream>

using namespace std;

int main(){

    int n; 
    cin >> n;

    int high = 1;
    int sec = 0;
    int input;
    for (int i = 0; i < n; i++){
        cin >> input;
        if (input > high){
            sec = high;
            high = input;
        }
        if (input > sec && input < high){
            sec = input;
        }

    }

    cout << sec;

}