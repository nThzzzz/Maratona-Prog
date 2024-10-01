#include <iostream>
#include <vector>

using namespace std;

int main(){
    int vezes;

    cin>>vezes;
    for(int i=0; i<vezes; i++){
        int qtd;
        cin>>qtd;
        vector<int> arr(qtd);

        for(int j=0; j<qtd; j++){
            cin >> arr[j];
        }

        vector<int> arroriginal = arr;

        int swp =0;
        for (int k = 0; k < qtd - 1; k++) {
            bool trocado = false; 
            for (int j = 0; j < qtd - k - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Troca se o elemento encontrado for menor que o seguinte
                    swap(arr[j+1], arr[j]);
                    trocado = true;
                    swp +=1;
                }
            }
            if (!trocado) {
                break;
            }
        }

        // for(int a=0; a<qtd; a++){
        //     if(arr[a]==arroriginal[a]){
        //         swp+=1;
        //     }
        // }

        cout << "Optimal train swapping takes " << swp << " swaps.\n";

    }

    return 0;
}