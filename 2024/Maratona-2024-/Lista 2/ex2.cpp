#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    double a, b, c;
   
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    double delta = (b * b) - (4 * a * c);

    if (delta > 0) {
        cout << "R1 = " << fixed << setprecision(5) << (-b + sqrt(delta)) / (2 * a) << endl;
        cout << "R2 = " << fixed << setprecision(5) << (-b - sqrt(delta)) / (2 * a) << endl;
    } else if (delta < 0) {
        cout << "Impossivel calcular" << endl;
    } else { 
        cout << "R1 = " << fixed << setprecision(5) << (-b) / (2 * a) << endl;
    }

    return 0;
}
