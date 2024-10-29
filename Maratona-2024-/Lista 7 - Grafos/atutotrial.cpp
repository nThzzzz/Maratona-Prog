#include <iostream>

// Existem 2 tipos de grafos, direcionados e não direcionados
// Normalmente se utiliza uma lista de adjascencia que mostra quais ponstos estão ligados com qual
//    A     
//   / \    
//  B   C  
//  |   |
//  D---E
// *Lista de ajascencia: 
//      A -> B -> C.
//      B -> D.
//      C -> E.
//      D -> E.
// 
// *Matriz adjascente:
//  5x5| A | B | C | D | E
//   A | 0   1   1   0   0
//   B | 1   0   0   1   0
//   C | 1   0   0   0   1
//   D | 0   1   0   0   1  
//   E | 0   0   1   1   0
// *C++
//  vector<vector<vector<int>> adj(5); lista de 5 vertices 
//      adj[0].pushback(1) A -> B
//      adj[0].pushback(2) A -> C 
//      adj[1].pushback(3) B -> D
//      adj[2].pushback(4) C -> E
//      adj[3].pushback(4) D -> E


using namespace std;

int main(){

    

    return 0;
}