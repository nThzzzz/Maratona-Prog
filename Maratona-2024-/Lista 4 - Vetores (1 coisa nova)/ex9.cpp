#include <iostream>

using namespace std;

int main() {
    int qtd;

    cin >> qtd;

    int *n = new int[qtd];

    for (int i = 0; i < qtd; i++) {
        cin >> n[i];
    }

    int menor = n[0];
    int posi = 0;


    for (int i = 1; i < qtd; i++) {
        if (n[i] < menor) {
            menor = n[i];
            posi = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posi << endl;

    delete[] n; //Não esquece do free animal

    return 0;
}