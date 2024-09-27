#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    while (true){
        int ordem;

        cin >> ordem;
        if (ordem == 0) {
            break;
        }

        vector<vector<int>> matriz(ordem, vector<int>(ordem));

        for(int i = 0; i < ordem; i++){
            for(int j = 0; j < ordem; j++){
                if(i == j){
                    matriz[i][j] = 1;
                }else if(j>i){
                    matriz[i][j] += (j - i) + 1; 
                }else{
                    matriz[i][j] += (i - j) + 1; 
                }
            }        
        }

        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                cout << setw(3) << matriz[i][j];
                if (j < ordem - 1) {
                    cout << " ";
                }
            }
            cout << endl; 
        }
        cout << endl; 
    }
    
    return 0;
}