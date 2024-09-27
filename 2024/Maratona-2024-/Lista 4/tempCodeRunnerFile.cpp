#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){
    int ordem, x, y;

    cin >> ordem;
    vector<vector<int>> matriz(ordem, vector<int>(ordem));

    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            if(i+j==ordem-1){
                matriz[i][j]=2;
            }else if(i==j){
                matriz[i][j]=1;
            }else{
                matriz[i][j]=3;
            }
        } 
    }

    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            cout << matriz[i][j];
        }
        cout << endl; 
    }
    cout << endl; 

    return 0;
}