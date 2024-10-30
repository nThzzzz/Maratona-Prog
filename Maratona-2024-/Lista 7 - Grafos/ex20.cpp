#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int verifica(vector<pair<int, int>>& visitados, int i, int j);
void defefe(int matriz[7][7], vector<pair<int, int>>& visitados, int iorg, int jorg);

int main(){

    int t;
    cin >> t;

    while (t--){
            
        int Matriz_adj[7][7];

        vector<pair<int, int>> visitados;

        for(int i=0; i<7; i++){
            for(int j=0; j<7; j++){
                if((i==0 || j==0 || j==5+1 || i==5+1)){
                    Matriz_adj[i][j] == 1;
                }
                cin >> Matriz_adj[i][j];
            }
        }

        for(int i=0; i<7; i++){
            for(int j=0; j<7; j++){
                cout << Matriz_adj[i][];
            }
        }

        defefe(Matriz_adj, visitados, 0, 0);

        if(verifica(visitados, 4, 4) == 1){
            cout << "COPS\n";
        }else{
            cout << "ROBBERS\n";
        }
    }

    return 0;
}


int verifica(vector<pair<int, int>>& visitados, int i, int j){
    for(auto par : visitados){
        if(par.first == i && par.second == j){
            return 1;
        }
    }

    return 0;
}

void defefe(int matriz[7][7], vector<pair<int, int>>& visitados, int iorg, int jorg){   
    
    //                                   baixo    cima    esquerda  direita
    vector<pair<int, int>> movimentos = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
    
    int novo_i = iorg;
    int novo_j = jorg;

    for(auto par : movimentos){
        if(((iorg + par.first)>=0 && (iorg + par.first)<5) && ((jorg + par.first)>=0 && (jorg + par.first)<5) && matriz[iorg][jorg] == 0){
            novo_i = iorg + par.first;
            novo_j = jorg + par.second;
            if(matriz[novo_i][novo_j]==0){
                if(verifica(visitados, novo_i, novo_j)==0){  
                    visitados.push_back(make_pair(novo_i, novo_j));
                    defefe(matriz, visitados, novo_i, novo_j);
                }
            }
        }
    }    
}


// copiar os casos num arquivo a parte e depois da no git bash
// cd Lista\ 7\ -\ Grafos\
//./exe20.exe < inEx20
// executa



// erro

// 0 0 0 0 0 
// 0 0 1 0 0 
// 1 0 1 1 0 
// 0 1 0 0 0 
// 0 1 0 1 0 



// ----------------------------------- com grafo ------------------------------------//

// int verifica(vector<int>& visitados, int nodo){
//     for(int i=0; i<visitados.size(); i++){
//         if(visitados[i] == nodo){
//             return 1;
//         }
//     }

//     return 0;
// }

// void dfefe(vector<vector<int>>& adj, vector<int>& visitados, int nodo){
//     for(int i=0; i<adj[nodo].size(); i++){
//         visitados.push_back(nodo);
//         if(verifica(visitados, adj[nodo][i])==0){
//             dfefe(adj, visitados, adj[nodo][i]);
//         }
//     }
// }

// int main(){

// int Matriz_adj[5][5];

// for(int i=0; i<5; i++){
//     for(int j=0; j<5; j++){
//         cin >> Matriz_adj[i][j];
//     }
// }

//     vector<vector<int>> adj(25);
//     int nodo=0;
//     int nodo_vizi=0;
//     for(int i=0; i<5; i++){
//         for(int j=0; j<5; j++){
//             if((i==0 || j==0) && Matriz_adj[i][j]==0){
//                 if(Matriz_adj[i+1][j] == 0){
//                     nodo_vizi = nodo+5;
//                     adj[nodo].push_back(Matriz_adj[nodo_vizi][j]);
//                 }
//             }
//             nodo++;
//         }
//     }
    
//     vector<int> visitados;

//     if(verifica(visitados, 25)==1){
//         cout << "COPS\n";
//     }else{
//         cout << "ROBBERS\n";
//     }


//     return 0;
// }