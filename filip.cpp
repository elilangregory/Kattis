#include <iostream>

using namespace std;

int main(){
    
    string a, b;
    cin >> a >> b;
    
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(),b.end());
    
    int c = stoi(a);
    int d = stoi(b);
    
    if (a > b){cout << a;}
    else cout << b;
    
    
}