#include <iostream>
#include <vector>

using namespace std;

int main(){

    int vezes;
    cin >> vezes;

    for(int i=0; i<vezes; i++){
        int alunos;
        cin >> alunos;
        vector<int> arr(alunos);
        int trocas =0;

        for(int sla = 0; sla < alunos; sla++){
            cin >> arr[sla];
        }

        vector<int>arroriginal = arr;

        for (int k = 0; k < alunos - 1; k++) {
            bool trocado = false; 
            for (int j = 0; j < alunos - k - 1; j++) {
                if (arr[j] < arr[j + 1]) {
                    // Troca se o elemento encontrado for menor que o seguinte
                    swap(arr[j], arr[j + 1]);
                    trocado = true; // Houve uma troca
                }
            }
            if (!trocado) {
                break;
            }
        }

        for(int a=0; a<alunos; a++){
            if(arr[a]==arroriginal[a]){
                trocas+=1;
            }
        }

        cout << trocas << endl;
    }

    return 0;
}