#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){

    int L;
    double soma;
    vector<vector<double>> matriz(12, vector<double>(12));
    char op;

    cin>> L;
    cin >> op;
    
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> matriz[i][j];
            if(L==i){
                soma+=matriz[i][j];
            }
        }
    }

    if(op == 'S'){
        cout << fixed << setprecision(1) << soma << endl;
    }else{
        cout << fixed << setprecision(1) << soma/12 << endl;
    }

    return 0;
}