#include <iostream>

using namespace std;

int main(){

    int name;
    int total, n;

    cin >> total;
        int s2 = 0;
        int s3 = 0;

    for (int i = 0; i < total; i++){
        
        cin >> name;
        cin >> n;


        for (int i = 0; i < 2*n+1; i++){
            
            if(i%2){s2+=i;}
            
            else s3 +=i;
        }
        

        cout << name << " " << (n*(n+1))/2 << " " << s2 << " " << s3 << endl;

        s2 = 0;
        s3 = 0;

    }
}