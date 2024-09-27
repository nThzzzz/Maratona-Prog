#include <iostream>
#include <iomanip>

using namespace std;

void simplifica(int numerador, int denominador);

int main(){

    int vezes;
    cin >> vezes;

    for(int i=0; i<vezes; i++){
        int N1, D1, N2, D2;
        char frac1, frac2, op;
        int DR, NR;

        cin >> N1 >> frac1 >> D1>> op >> N2 >> frac2 >> D2;
        switch (op){
        case '+':
            NR = (N1*D2 + N2*D1);
            DR = (D1*D2);
            simplifica(NR, DR);
            break;
        case '-':
            NR = (N1*D2 - N2*D1);
            DR = (D1*D2);
            simplifica(NR, DR);
            break;
        case '*':
            NR = (N1*N2);
            DR = (D1*D2);
            simplifica(NR, DR);
            break;
        case '/':
            NR = (N1*D2);
            DR = (N2*D1);
            simplifica(NR, DR);
            break;
        
        default:
            break;
        }  
    }

    return 0;
}

void simplifica(int numerador, int denominador){
    int NRF, DRF;

    for(int i=0; i<10; i++){
        if(numerador%i==0 && denominador%i==0){
            NRF = numerador/i;
            DRF = denominador/i;
        }else{
            NRF = numerador;
            DRF = denominador; 
        }
    }

    cout << numerador << "/" << denominador << " = " << NRF << "/" << DRF << endl;
    
}