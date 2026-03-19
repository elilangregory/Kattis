#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){


    string a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    string rank = "";
    rank += a[0]; rank += b[0]; rank+= c[0]; rank +=d[0]; rank+=e[0];


    int n = rank.size();
    int duplicate = 0;
    vector<int> v;
    for (int i = 0; i < n; i++){


        for (int j = 0; j < n; j++){
            
            if(rank[i] == rank[j]){
                duplicate++;
            }
        }
        v.push_back(duplicate);
        duplicate = 0;
    }

    sort(v.begin(),v.end());
    int l = v.size();
    cout << v[l-1] << endl;



}
