#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){
    int N, M;

    while(cin >> N >> M){
        vector<vector<int>> pao(N, vector<int>(M));
        vector<vector<int>> mostra(N, vector<int>(M, 0));

        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                cin >> pao[i][j];
            }
        }

        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(pao[i][j]==1){
                    mostra[i][j] = 9;
                }else{
                    int cont = 0;
                    if (i > 0 && pao[i - 1][j] == 1) cont++; 
                    if (i < N - 1 && pao[i + 1][j] == 1) cont++; 
                    if (j > 0 && pao[i][j - 1] == 1) cont++;
                    if (j < M - 1 && pao[i][j + 1] == 1) cont++; 
                    mostra[i][j] = cont;
                }
            }
        }

        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                cout << mostra[i][j];
            }
            cout << "\n";
        }
    }

    return 0;
}