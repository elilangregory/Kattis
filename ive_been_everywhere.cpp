#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main(){

    int n,m;
    cin >> n; 
    vector<string> town;
    string townname;

    for (int i = 0; i < n; i++){
        cin >> m;
        for (int j = 0; j< m; j++){
            cin >> townname;
            town.push_back(townname);
        }
        unordered_set<string> unique(town.begin(), town.end());
        cout << unique.size() << "\n";

        town.clear();


    }
    

}