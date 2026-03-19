#include <iostream>

using namespace std;


int main(){

    int L, x;
    cin >> L >> x;

    string action;
    int group_n;
    int occupied = 0;
    int reject = 0;
    
    for (int i = 0; i < x; i++){
        cin >> action >> group_n;
        if (action == "enter" && (occupied + group_n) <= L){
            occupied += group_n;
            continue;
        }
        if (action == "enter" && (occupied + group_n) > L){
            reject ++;
            continue;
        }
        
        if (action == "leave"){
            occupied -= group_n;
        }
    }
    cout << reject << endl;

}