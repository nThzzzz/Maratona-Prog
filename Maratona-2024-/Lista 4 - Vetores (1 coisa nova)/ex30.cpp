#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){
    int N, M;

    while(cin >> N >> M){
        int N1=N+2, M1=M+2;
        vector<vector<char>> mapa(N1, vector<char>(M1));

        for(int i=0; i<N+2; i++){
            for(int j=0; j<M+2; j++){
                if((i==0 || j==0 || j==M+1 || i==N+1)){
                    mapa[i][j] = '.';
                }else{
                    cin >> mapa[i][j];
                }
            }
        }  
        
        int cont;
        for(int i=0; i<N+2; i++){
            for(int j=0; j<M+2; j++){
                if(mapa[i][j]=='#'){
                    if((i>0 && j>0 && j<M+1 && i<N+1)&&(mapa[i][j-1]=='.' || mapa[i][j+1]=='.' || mapa[i-1][j]=='.' || mapa[i+1][j]=='.')){
                        cont++;
                    }
                }
            }
        }
        cout << cont << endl;

    }

    return 0;
}