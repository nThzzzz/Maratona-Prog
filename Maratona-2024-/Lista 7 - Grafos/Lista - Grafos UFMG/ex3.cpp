#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>& grafo, vector<int>& visitado, int nodo);
int visitados(vector<int>& visitados, int nodo);

int main(){
    int vert, arestas;

    cin >> vert >> arestas;

    vector<vector<int>> grafo(vert);
    vector<int> visitados;

    


    return 0;
}

void dfs(vector<vector<int>>& grafo, vector<int>& visitados, int nodo){
    visitados.push_back(nodo);

    for(int i=0; i<grafo[nodo].size(); i++){
        if(visitado(visitados, grafo[nodo][i])==0){
            dfs(grafo, visitados, grafo[nodo][i]);
        }
    }
}

int visitado(vector<int>& visitados, int nodo){
    for(int i=0; i<visitados.size(); i++){
        if(nodo == visitados[i]){
            return 1;
        }
    }

    return 0;
}