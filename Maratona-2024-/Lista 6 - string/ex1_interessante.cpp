#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); 

    for (int i = 0; i < N; i++) {
        string palavra;
        getline(cin, palavra);

        for(int j=0; j<palavra.size(); j++){
            if(isalpha(palavra[j])){
                palavra[j] = char(int(palavra[j]+3));
            }
        }

        reverse(palavra.begin(), palavra.end());

        for (size_t j = palavra.size() / 2; j < palavra.size(); j++) {
            palavra[j] -= 1;
        }

        cout << palavra << endl;
    }

    return 0;
}
