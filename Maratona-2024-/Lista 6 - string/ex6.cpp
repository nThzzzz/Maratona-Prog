#include <iostream>

using namespace std;

int main(){

    int vezes;
    cin >> vezes;

    for(int i=0; i<vezes; i++){
        string sequencia, parte, final = "";
        cin >> sequencia >> parte;

        int tamanhoparte = parte.size();
        int tamanhosequencia = sequencia.size();

        for(int j=tamanhosequencia-tamanhoparte; j<tamanhosequencia; j++){
            final += sequencia[j];
        }

        int igual = 0;
        for(int j=0; j<parte.size(); j++){
            if(parte[j]==final[j]){
                igual+=1;
            }
        }

        if(igual == tamanhoparte){
            cout << "encaixa\n";
        }else{
            cout << "nao encaixa\n";
        }
    }

    return 0;
}