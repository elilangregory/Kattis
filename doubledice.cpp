#include <iostream>
#include <vector>
#include <cctype>


using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

   std::vector <int> utfall;
   int max = 12;
    int counter = 0;
   for (int i = 1; i < 7; i++){

        for (int j = 0; j < i; j++){
            utfall.push_back(i+1);
            if (max-counter != 7){utfall.push_back(max-counter);}
            

        }
        counter++;
   }

   int a,b;
   cin >>a;
   int teller = 0;
   
   for (int i = 0; i < a; i++){
        cin >> b;
        for (int verdi : utfall){
            if (b == verdi){
                teller++;
            }
        }
   }
    cout << 1.0/36.0 * teller << endl;


    return 0;
}
