#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){

    double soma, contador;
    vector<vector<double>> matriz(12, vector<double>(12));
    char op;
    cin >> op;
    
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> matriz[i][j];
            if(i+j < 12-1){
                soma+=matriz[i][j];
                contador += 1;
            }
        }
    }

    if(op == 'S'){
        cout << fixed << setprecision(1) << soma << endl;
    }else{
        cout << fixed << setprecision(1) << soma/contador << endl;
    }

    return 0;
}