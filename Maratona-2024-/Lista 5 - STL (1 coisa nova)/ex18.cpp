#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<string> letras;
    int cont=0 ;

    letras.push_back("FACE");

    for(int i=1; i<n+1; i++){
        string sequencia;
        cin >> sequencia;

        letras.push_back(sequencia);
        reverse(letras[i-1].begin(), letras[i-1].end());

        if(letras[i]==letras[i-1]){
            cont+=1;
            letras.clear();
            letras.push_back("FACE");   
        }
        
    }

    cout << cont << endl;

}

//  F A C E 
//  E C F A
//  A C E F
//  F E C A
//  A F C E
