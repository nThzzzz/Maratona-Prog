#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int cod;
    double qtd;

    cin >> cod;

    switch (cod)
    {
    case 1:
        cin >> qtd;
        cout << "Total: R$ " << fixed << setprecision(2) << qtd*4 << endl;
        break;
    case 2:
        cin >> qtd;
        cout << "Total: R$ " << fixed << setprecision(2) << qtd*4.50 << endl;
        break;
    case 3:
        cin >> qtd;
        cout << "Total: R$ " << fixed << setprecision(2) << qtd*5 << endl;
        break;
    case 4:
        cin >> qtd;
        cout << "Total: R$ " << fixed << setprecision(2) << qtd*2 << endl;
        break;
    case 5:
        cin >> qtd;
        cout << "Total: R$ " << fixed << setprecision(2) << qtd*1.5 << endl;
        break;
    default:
        break;
    }

    return 0;
}