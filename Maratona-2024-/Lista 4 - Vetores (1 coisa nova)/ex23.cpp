#include <iostream>
#include <vector>

using namespace std;

int main(){

    int atributos, cartasM, cartasL;

    while (cin >> atributos >> cartasM >> cartasL){
        vector<vector<int>> matrizM(cartasM, vector<int>(atributos));
        vector<vector<int>> matrizL(cartasL, vector<int>(atributos));

        for(int i=0; i<cartasM; i++){
            for(int j=0; j<atributos; j++){
                cin >> matrizM[i][j];
            }  
        }   

        for(int i=0; i<cartasL; i++){
            for(int j=0; j<atributos; j++){
                cin >> matrizL[i][j];
            }  
        }

        int escolhaM, escolhaL;
        cin >> escolhaM >> escolhaL;

        int escolhaatributo;
        cin >> escolhaatributo;

        escolhaM--;
        escolhaL--;
        escolhaatributo--;

        if(matrizM[escolhaM][escolhaatributo]>matrizL[escolhaL][escolhaatributo]){
            cout << "Marcos\n";
        }else if(matrizM[escolhaM][escolhaatributo]<matrizL[escolhaL][escolhaatributo]){
            cout << "Leonardo\n";
        }else{
            cout << "Empate\n";
        }   

    }

    return 0;
}