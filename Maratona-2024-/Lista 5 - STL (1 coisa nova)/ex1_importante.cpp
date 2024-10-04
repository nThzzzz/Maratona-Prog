#include <iostream>
#include <iomanip>

using namespace std;

int MMC(int a, int b);
void simplifica(int numerador, int denominador);

int main() {
    int vezes;
    cin >> vezes;

    for (int i = 0; i < vezes; i++) {
        int N1, D1, N2, D2;
        char frac1, frac2, op;

        cin >> N1 >> frac1 >> D1 >> op >> N2 >> frac2 >> D2;

        int NR, DR;

        switch (op) {
            case '+':
                NR = (N1 * D2 + N2 * D1);
                DR = (D1 * D2);
                cout << NR << "/" << DR << " = ";
                break;
            case '-':
                NR = (N1 * D2 - N2 * D1);
                DR = (D1 * D2);
                cout << NR << "/" << DR << " = ";
                break;
            case '*':
                NR = (N1 * N2);
                DR = (D1 * D2);
                cout << NR << "/" << DR << " = ";                
                break;
            case '/':
                if (N2 == 0) {
                    cout << "Indeterminado" << endl;
                    continue; 
                }
                NR = (N1 * D2);
                DR = (N2 * D1);
                cout << NR << "/" << DR << " = ";
                break;
            default:
                cout << "Operação inválida" << endl;
                continue; 
        }
        simplifica(NR, DR);
    }

    return 0;
}

int MMC(int a, int b) { 
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplifica(int numerador, int denominador) {
    if (denominador == 0) {
        cout << "Impossível\n";
        return;
    }
    int divisor = MMC(abs(numerador), abs(denominador)); // abs para ignorar os negativos para a simplificação
    numerador /= divisor;
    denominador /= divisor;
    
    cout << numerador << "/" << denominador << endl;
}