#include <iostream>
#include <vector>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<vector<int>> matriz(n, vector<int>(n));
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                cin >> matriz[i][j];
            }
        }

        int linha, colunas;

        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                cin >> matriz[i][j];
            }
        }
    }

    return 0;
}