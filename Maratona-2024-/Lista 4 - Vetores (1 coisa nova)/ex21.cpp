#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    int qtd;
    cin >> qtd;


    double ser = 0, blok = 0, atk = 0;
    double sert = 0, blokt = 0, atkt = 0;

    for (int i = 0; i < qtd; i++) {
        string nome;
        cin >> nome;

        vector<vector<int>> matriz(2, vector<int>(3));

        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                cin >> matriz[j][k];
            }
        }

        if (matriz[0][0] != 0) {
            ser += (matriz[1][0]);
            sert += (matriz[0][0]);
        }
        if (matriz[0][1] != 0) {
            blok += (matriz[1][1]);
            blokt += (matriz[0][1]);
        }
        if (matriz[0][2] != 0) {
            atk += (matriz[1][2]);
            atkt += (matriz[0][2]);
        }
    }

    cout << "Pontos de Saque: " << fixed << setprecision(2) << (ser / sert)*100 << " %." << endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << (blok / blokt)*100 << " %." << endl;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << (atk / atkt)*100 << " %." << endl;
    return 0;
}
