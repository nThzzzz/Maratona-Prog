#include <iostream>
#include <vector>

using namespace std;

int visitado(const vector<int>& visitados, int nodo) {
    for(int i = 0; i < visitados.size(); i++){
        if(visitados[i] == nodo){
            return 1;
        }
    }
    return 0;
}

void dfs(int nodo, vector<int>& visitados, const vector<vector<int>>& adj, int& cont) {
    visitados.push_back(nodo); 
    for (int i = 0; i < adj[nodo].size(); i++){ 
        if (visitado(visitados, adj[nodo][i]) == 0) {
            cont++; 
            dfs(adj[nodo][i], visitados, adj, cont); 
        }
    }
}

int main() {
    int t;
    cin >> t; 
    
    for (int i = 0; i < t; i++) {
        int nodo_inicial;
        cin >> nodo_inicial;
        
        int nodos, arestas;
        cin >> nodos >> arestas; 

        vector<vector<int>> adj(nodos); 

        for (int j = 0; j < arestas; j++) {
            int nodo_a, nodo_b;
            cin >> nodo_a >> nodo_b;    
            
            adj[nodo_a].push_back(nodo_b);
            adj[nodo_b].push_back(nodo_a);
        }

        vector<int> visitados; 
        int cont = 0;

        dfs(nodo_inicial, visitados, adj, cont);

        cout << 2 * cont << endl; 
    }

    return 0;
}
