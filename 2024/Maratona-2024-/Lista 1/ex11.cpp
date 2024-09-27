#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double x, y;

    cin >> x >> y; 

    cout << fixed << setprecision(3) << x/y << " km/l" << endl;

    return 0;
}