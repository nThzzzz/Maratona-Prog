#include <iostream>

using namespace std;

int main() {
    int palavras;
    cin >> palavras;

    for (int i = 0; i < palavras; i++) {
        string palavra, palavra2, resultante = "";

        cin >> palavra >> palavra2;

        int maxLength = max(palavra.size(), palavra2.size());
        for (int j = 0; j < maxLength; j++) {
            if (j < palavra.size()) {
                resultante += palavra[j];
            }
            if (j < palavra2.size()) {
                resultante += palavra2[j];
            }
        }

        cout << resultante << endl;
    }

    return 0;
}
