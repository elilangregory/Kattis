#include <iostream>

using namespace std;

int main(){

    int province = 8;
    int duchy = 5;
    int estate = 2;
    int gold_cost = 6;
    int silver_cost = 3;
    int copper_cost = 0;
    int g,s,c;
    cin >> g >> s >> c;
    
    int buying_power_gold = 3*g;
    int buying_power_silver = 2*s;
    int buying_power_copper = 1*c;

    int tot = buying_power_copper + buying_power_silver + buying_power_gold;

    if (tot >= province){
        cout << "Province or ";
    }
    else if (tot >= duchy) cout << "Duchy or ";
    else if (tot >= estate) cout << "Estate or ";

    if (tot >= gold_cost) {cout << "Gold";}
    else if (tot >= silver_cost) cout << "Silver";
    else if (tot >= copper_cost) cout << "Copper";

    return 0;

    
}