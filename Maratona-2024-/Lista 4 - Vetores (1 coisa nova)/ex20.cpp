#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main() {
    int ordem;
    while (true) {
        cin >> ordem;
        if (ordem == 0) {
            break;
        }

        vector<vector<int>> matriz(ordem, vector<int>(ordem));

    
        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                matriz[i][j] = (1 << (i + j)); // 2^(i+j)
            }
        }

        int maior = matriz[ordem - 1][ordem - 1];
        int T = to_string(maior).size();

        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                cout << setw(T) << matriz[i][j];
                if (j < ordem - 1) {
                    cout << " ";
                }
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}
