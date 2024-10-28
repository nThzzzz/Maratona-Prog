#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string caso;
        getline(cin, caso);

        int contadorAbertura = 0;
        int contadorDiamantes = 0;

        for (char c : caso) {
            if (c == '<') {
                contadorAbertura++;
            } else if (c == '>') {
                if (contadorAbertura > 0) {
                    contadorDiamantes++;
                    contadorAbertura--;
                }
            }
        }

        cout << contadorDiamantes << endl; 
    }

    return 0;
}
