#include <iostream>
#include <cmath>


using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    int rows, columns, z_rows, z_cols;
    cin >> rows >> columns >> z_rows >> z_cols;
    string line;
    int tot_row = rows*z_rows;
    int tot_cols = columns*z_cols;

    for (int i = 0; i < rows; i++){
        cin >> line;
        for (int j = 0; j < z_rows; j++){

            for (char ch : line){
                   for (int k = 0; k < z_cols; k++){
                    cout << ch << "";
                }
            }
            cout << "\n";

        } 
    }





    return 0;
}