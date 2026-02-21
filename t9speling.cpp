#include <iostream>
#include <vector>
#include <limits>

std::vector<int> numbers = {2,22,222,3,33,333,4,44,444,5,55,555,6,66,666,7,77,777,7777,8,88,888,9,99,999,9999,0};


int main(){
    int n;
    std::cin >> n;
    std::vector<std::string> out; 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');    
    
    for (int i = 1; i < n+1; i++){
        std::cout << "Case #" << i << ": ";
        std::string input;
        std::getline(std::cin, input);

        for (char ch : input){
            if (ch == ' '){
                out.push_back("0");
                continue;
            }
            // ascii offset for only lowercase letters. 
            int adj = static_cast<int>(ch) - 97;
            out.push_back(std::to_string(numbers.at(adj)));
        }

       for (size_t j = 0; j < out.size(); j++) {
    std::cout << out[j];
    if (j + 1 < out.size() && out[j][0] == out[j+1][0]) {
        std::cout << ' ';
    }
}
std::cout << '\n';
out.clear();
    }

}
