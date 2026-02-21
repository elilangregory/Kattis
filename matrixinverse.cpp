#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double clean(int x);

void inverse_matrix(const vector<long long>& m) {
    long long a = m[0], b = m[1], c = m[2], d = m[3];

    long long det = a * d - b * c;

    double coeff = 1.0 / static_cast<double>(det);

    double a1 =  coeff * d;
    double b1 = -coeff * b;
    double c1 = -coeff * c;
    double d1 =  coeff * a;

    cout << a1 << " " << clean(b1) << "\n";
    cout << clean(c1) << " " << clean(d1) << "\n";
}


double clean(int x) {
        if (x == 0) return 0;

        return x;
    }


int main() {

    int counter = 1;

    while (true) {
        long long a, b, c, d;

        // prøv å lese 4 tall; hvis det ikke går -> EOF/feil -> stopp
        if (!(cin >> a >> b >> c >> d)) break;

        cout << "Case " << counter++ << ":\n";
        inverse_matrix({a, b, c, d});
    }
}