#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arestas, vertices;
    int cont = 0;

    while (1) {
        cin >> vertices >> arestas;

        if (vertices == 0 && arestas == 0) {
            break;
        }

        cont++;

        vector<vector<int>> adj(vertices); 

        for (int i = 0; i < arestas; i++) {
            int nodo1, nodo2;
            cin >> nodo1 >> nodo2;

            adj[nodo1 - 1].push_back(nodo2 - 1);
            adj[nodo2 - 1].push_back(nodo1 - 1);
        }

        vector<int> tamanho(vertices);
        int max_tamanho = -1;

        for (int i = 0; i < vertices; i++) {
            tamanho[i] = adj[i].size();
            if (tamanho[i] > max_tamanho) {
                max_tamanho = tamanho[i];
            }
        }

        vector<int> resposta;

        for (int i = 0; i < vertices; i++) {
            if (tamanho[i] == max_tamanho) {
                resposta.push_back(i + 1); 
            }
        }

        cout << "Teste " << cont << endl;
        for (int i = 0; i < resposta.size(); i++) {
            cout << resposta[i] << " ";
        }
        cout << "\n"; 
    }

    return 0;
}


// void dfs(vector<int>& visitados, vector<vector<int>>& grafo, int nodo){
//     visitados.push_back(nodo);
//     for(int i=0; i < grafo[nodo].size(); i++){
        
//     }
// }

// int visitados(vector<int>& visitados, int nodo){

// }


// A Viagrene
// 5 7
// 1 3
// 2 1
// 3 2
// 3 4
// 4 5
// 3 5
// 2 5

// 1 -> 3 -> 2.
// 2 -> 1 -> 5.
// 3 -> 1 -> 3 -> 4 -> 5.
// 4 -> 5 -> 3.
// 5 -> 3 -> 4.
