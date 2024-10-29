#include <iostream>
#include <vector>

using namespace std;

int verifica(vector<int>& visitados, int nodo){
    for(int i=0; i<visitados.size(); i++){
        if(visitados[i] == nodo){
            return 1;
        }
    }

    return 0;
}

void dfefe(vector<vector<int>>& adj, vector<int>& visitados, int nodo){
    for(int i=0; i<adj[nodo].size(); i++){
        visitados.push_back(nodo);
        if(verifica(visitados, adj[nodo][i])==0){
            dfefe(adj, visitados, adj[nodo][i]);
        }
    }
}

int main(){

    int Matriz_adj[5][5];

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> Matriz_adj[i][j];
        }
    }

    vector<vector<int>> adj(25);

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            int nodo = (i+1)*(j+1);
            if(Matriz_adj[i][j] != 1){
                adj[i].push_back(nodo);
                adj[nodo].push_back(i);                
            }
        }
    }
    
    vector<int> visitados;

    if(verifica(visitados, 25)==1){
        cout << "COPS\n";
    }else{
        cout << "ROBBERS\n";
    }


    return 0;
}