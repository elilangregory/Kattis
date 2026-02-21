#include <iostream>
#include <vector>
#include <set>


int main(){
    int a;
    std::vector<int> elements;

    for (int i = 0; i < 10; i++){
        
        std::cin >> a;
        int rest = a%42;
        elements.push_back(rest);
    }

    std::set<int> unique(elements.begin(),elements.end());
    
    std::cout << unique.size();
    

}