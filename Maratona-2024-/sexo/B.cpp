#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

int main(){

    vector<pair<int, int>> pontos;

    int n; 
    cin >> n;

    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;

        pontos.push_back({x, y});    
    }

    sort(pontos.begin(), pontos.end());


    // int cont=0;

    // int tamanho = pontos.size();

    // for(int i=0; i<tamanho; i++){
    //     for(int j=0; j<tamanho; j++){
    //         if(((pontos[i].first != pontos[j].first) && (pontos[i].second != pontos[j].second))){
    //             cont++;
    //         }
    //     } 
    //     pontos.erase(pontos.begin() + i);
    //     tamanho--;  
    // }

    // cout << cont << endl;


  int cont=0;

    int tamanho = pontos.size();

    for(int i=0; i<tamanho; i++){
        if(pontos[i].first < pontos[i+1].first && (pontos[i].second > pontos[i+1].second)){
            cont++;
        }
    }

    cout << cont << endl; 


    return 0;
}
