#include <iostream>

using namespace std;

int main(){

    int base, n;
    int input;
    cin >> base >> n;
    int total = base;

    for (int i = 0; i < n; i++){
        cin >> input;
        total += (base - input);
    }

    cout << total << endl;
    
}