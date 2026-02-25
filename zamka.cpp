#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int sumOfDigits(int x){

    int length = to_string(x).size();
    int a;
    int sum = 0;

    for (int i = 0; i < length; i++){
        a = x%10;
        sum += a;
        x = (x-a)/10;
    }
    return sum;

}




int main(){
    
    int L, D, X;
    cin >> L >> D >> X;


    for (int i = L; i <= D; i++){
        if (sumOfDigits(i)== X) {
            cout << i << endl;
            break;}
    }
    for (int i = D; i >= L; i--){
         if (sumOfDigits(i)== X) {
            cout << i << endl;
            break;}
    }
    
}