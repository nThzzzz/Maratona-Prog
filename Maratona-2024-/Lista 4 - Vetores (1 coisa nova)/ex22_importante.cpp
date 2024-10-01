#include <iostream>

using namespace std;

int main() {
    int qtdp, qtdc;

    while (cin >> qtdp >> qtdc) {
        int *arr = new int[qtdp];

        for (int i = 0; i < qtdp; i++) {
            cin >> arr[i];
        }

        // Usar qtdp para o tamanho do array
        for (int i = 0; i < qtdp - 1; i++) {
            bool trocado = false; // Inicializa o flag de troca
            for (int j = 0; j < qtdp - i - 1; j++) {
                if (arr[j] < arr[j + 1]) {
                    // Troca se o elemento encontrado for menor que o seguinte
                    swap(arr[j], arr[j + 1]);
                    trocado = true; // Houve uma troca
                }
            }
            // Se não houve trocas, a lista já está ordenada
            if (!trocado) {
                break;
            }
        }

        for (int i = 0; i < qtdc; i++) {
            int posi;
            cin >> posi;
            cout << arr[posi-1] << endl;
        }

        delete[] arr; // não esuqece sapohja
    }

    return 0;
}
