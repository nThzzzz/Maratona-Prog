#include <iostream>
#include <iomanip>

using namespace std;

void verifica(double nota, int tipo);

int main(){
    double n1, n2, n3, n4, media, nexame, mediaexame;
    
    cin >> n1 >> n2 >> n3 >> n4;
    media = ((2*n1) + (3*n2) + (4*n3) + n4)/10;
    cout << "Media: " << fixed << setprecision(1) << media << endl;
    
    if(media >= 5.0 && media < 7){
        cout << "Aluno em exame.\n";
        cin >> nexame;
        cout << "Nota do exame: " << nexame << endl;
        mediaexame = (nexame + media) /2;
        verifica(mediaexame, 1);
        cout << "Media final: " << fixed << setprecision(1) << mediaexame << endl;
        return 0;
    }
    verifica(media, 0);

    return 0;
}

void verifica(double nota, int tipo){
    switch (tipo)
    {
    case 0:
        if(nota >= 7){
            cout << "Aluno aprovado.\n";
        }else{
            cout << "Aluno reprovado.\n";
        }
        break;
    case 1:
        if(nota >= 5){
            cout << "Aluno aprovado.\n";
        }else{
            cout << "Aluno reprovado.\n";
        }
        break;
    default:
        break;
    }
    
}