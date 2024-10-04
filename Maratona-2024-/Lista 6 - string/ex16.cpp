#include <bits/stdc++.h>

using namespace std;

int main(){
    string codigo;
    getline(cin, codigo);

    int colunas;
    colunas = (codigo.size()/4);
    vector<vector<char>> matring(4, vector<char>(colunas));

    for(int i=0; i<4; i++){
        for(int j=0; j<colunas; j++){
            matring[i][j] = codigo[i+j+(i*(colunas-1))];
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<colunas; j++){
            cout << matring[i][j];
        }
        cout << "\n";
    }


    return 0;
}

//41805999343912723659 % 257
//  41805
//  99934
//  39127
//  23659

//5686702053144751150382795214

//28665943684099848687740051804393