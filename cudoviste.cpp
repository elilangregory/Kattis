#include <iostream>

using namespace std;


int check_free_parking(string row_a,string row_b){

    int size = row_a.size();
    int free_parking = 0;
    for (int i = 0; i < size-1; i++){

        if (row_a[i] == '.' && row_a[i+1] == '.' ){
            if (row_b[i] == '.' && row_b[i+1] == '.' ) {free_parking++;}
        }
    }

    return free_parking;
}

int check_1_smash(string row_a, string row_b){

    int size = row_a.size();
    int smash1 = 0;
    for (int i = 0; i < size-1; i++){

        if (row_a[i] == 'X' && row_a[i+1] == '.' ){
            if (row_b[i] == '.' && row_b[i+1] == '.' ){
                smash1++;
            }
        }

        if (row_a[i] == '.' && row_a[i+1] == 'X' ){
            if (row_b[i] == '.' && row_b[i+1] == '.' ){
                smash1++;

            }
    }

    if (row_a[i] == '.' && row_a[i+1] == '.' ){
            if (row_b[i] == 'X' && row_b[i+1] == '.' ){
                smash1++;

            }
    }

    if (row_a[i] == '.' && row_a[i+1] == '.' ){
            if (row_b[i] == '.' && row_b[i+1] == 'X' ){
                smash1++;

            }}

        }

        return smash1;    
    }

int check_2_smash(string row_a, string row_b){

    int size = row_a.size();
    int smash2 = 0;
    for (int i = 0; i < size-1; i++){

        if (row_a[i] == 'X' && row_a[i+1] == 'X' ){
            if (row_b[i] == '.' && row_b[i+1] == '.' ){
                smash2++;
            }
        }

        if (row_a[i] == 'X' && row_a[i+1] == '.' ){
            if (row_b[i] == 'X' && row_b[i+1] == '.' ){
                smash2++;

            }
    }

    if (row_a[i] == 'X' && row_a[i+1] == '.' ){
            if (row_b[i] == '.' && row_b[i+1] == 'X' ){
                smash2++;

            }
    }

    if (row_a[i] == '.' && row_a[i+1] == 'X' ){
            if (row_b[i] == '.' && row_b[i+1] == 'X' ){
                smash2++;

            }}

    if (row_a[i] == '.' && row_a[i+1] == 'X' ){
            if (row_b[i] == 'X' && row_b[i+1] == '.' ){
                smash2++;

            }}
     if (row_a[i] == '.' && row_a[i+1] == '.' ){
            if (row_b[i] == 'X' && row_b[i+1] == 'X' ){
                smash2++;
            }}

    
    }


    return smash2;
}

int check_3_smash(string row_a, string row_b){

    int size = row_a.size();
    int smash1 = 0;
    for (int i = 0; i < size-1; i++){

        if (row_a[i] == 'X' && row_a[i+1] == 'X' ){
            if (row_b[i] == 'X' && row_b[i+1] == '.' ){
                smash1++;
            }
        }

        if (row_a[i] == 'X' && row_a[i+1] == 'X' ){
            if (row_b[i] == '.' && row_b[i+1] == 'X' ){
                smash1++;

            }
    }

    if (row_a[i] == '.' && row_a[i+1] == 'X' ){
            if (row_b[i] == 'X' && row_b[i+1] == 'X' ){
                smash1++;

            }
    }

    if (row_a[i] == 'X' && row_a[i+1] == '.' ){
            if (row_b[i] == 'X' && row_b[i+1] == 'X' ){
                smash1++;

            }}

        }

        return smash1;    
    }

int check_4_smash(string row_a,string row_b){

    int size = row_a.size();
    int free_parking = 0;
    for (int i = 0; i < size-1; i++){

        if (row_a[i] == 'X' && row_a[i+1] == 'X' ){
            if (row_b[i] == 'X' && row_b[i+1] == 'X' ) {free_parking++;}
        }
    }

    return free_parking;
}

   int main(){
    int row, colum;
    cin >> row >> colum;

    string r1, r2;
    cin >> r1; // første rad

    int free = 0, smash1 = 0, smash2 = 0, smash3 = 0, smash_all = 0;

    for (int i = 0; i < row - 1; i++) {  // <-- viktig
        cin >> r2;                        // <-- viktig

        free      += check_free_parking(r1, r2);
        smash1    += check_1_smash(r1, r2);
        smash2    += check_2_smash(r1, r2);
        smash3    += check_3_smash(r1, r2);
        smash_all += check_4_smash(r1, r2);

        r1 = r2;
    }

    cout << free << "\n" << smash1 << "\n" << smash2 << "\n" << smash3 << "\n" << smash_all;
}