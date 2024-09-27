#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    while (true) {
        int ordem;
        cin >> ordem;
        
        if (ordem == 0) {
            break;
        }

        vector<vector<int>> matriz(ordem, vector<int>(ordem));

        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                matriz[i][j] = min(min(i, j), min(ordem - 1 - i, ordem - 1 - j)) + 1; //tipo Distancia do taxi//manhatan
            }
        }

        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                cout << setw(3) << matriz[i][j];
                if (j < ordem - 1) {
                    cout << " ";
                }
            }
            cout << endl; 
        }
        cout << endl; 
    }

    return 0;
}