#include <iostream>

using namespace std;

int main() {
    int vezes;
    cin >> vezes;

    for (int i = 0; i < vezes; i++) {
        string palavra;
        int deslocamento;

        cin >> palavra >> deslocamento;

        for (int j = 0; j < palavra.size(); j++) {
            char letra = palavra[j];
            int novoIndex = (letra - 'A' - deslocamento + 26) % 26; 
            palavra[j] = 'A' + novoIndex;
        }

        cout << palavra << endl; 
    }

    return 0;
}
