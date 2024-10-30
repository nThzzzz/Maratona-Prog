#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){

    int matriz[5][5];

    int nodo=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            matriz[i][j]=nodo;
            nodo++;
        }
    }


    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout << matriz[i][j] << setw(3);
        }
        cout << "\n";
    }

    return 0;
}