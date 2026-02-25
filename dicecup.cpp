#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int start = min(a, b) + 1;
    int end   = max(a, b) + 1;

    for (int s = start; s <= end; s++) {
        cout << s << "\n";
    }
    return 0;
}