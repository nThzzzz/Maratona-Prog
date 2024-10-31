#include <iostream>
#include <vector>

using namespace std;

// Algoritimo DFS, pesquisa prfounda, pesquisa ate o fim.
void dfs(vector<vector<int>>& lista_adjs, vector<int>& visitados, int nodo, int& cont);
int visitado(vector<int>& visitados, int nodo);

int main(){
    int t;
    cin >> t;

    while(t--){
        // Nodo inicial e quantidade de vezes que é necessario para percorrer todo o grafico e voltar no mesmo lugar
        int origem;
        cin >> origem;
        int cont = 0;

        // grafo de 16 vertices
        // com 15 arestas;
        int arestas, nodos;
        cin >> nodos >> arestas;
        
        vector<vector<int>> adj(nodos);

        for(int i=0; i<arestas; i++){
            int nodo1, nodo2;
            cin >> nodo1 >> nodo2;

            // Dar push back de:
            // x -> y | y -> x 
            // pois o grafo não é direcionado
            adj[nodo1].push_back(nodo2);
            adj[nodo2].push_back(nodo1); 
        }

        // lista de nodos visitados
        vector<int> visitados;

        dfs(adj, visitados, origem, cont);

        cout << cont*2 << endl;
    }

    return 0;
}

void dfs(vector<vector<int>>& lista_adjs, vector<int>& visitados, int nodo, int& cont){
    visitados.push_back(nodo);
    for(int i=0; i<lista_adjs[nodo].size(); i++){
        if(visitado(visitados, lista_adjs[nodo][i])==0){
            cont++;
            dfs(lista_adjs, visitados, lista_adjs[nodo][i], cont);
        }
    }
}

int visitado(vector<int>& visitados, int nodo){
    for(int i=0; i<visitados.size(); i++){
        if(nodo == visitados[i]){
            return 1; // Já foi visto pelo algorítimo
        }
    }

    return 0; // Não foi visitado
}