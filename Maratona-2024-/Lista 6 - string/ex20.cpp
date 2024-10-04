#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int  main(){

    string vogais = "aeiou";

    string risada, risadavogal = "";
    cin >> risada;

    for(int i; i < risada.size(); i++){
        if(risada[i]=='a' || risada[i]=='e' || risada[i]=='i' || risada[i]=='o' || risada[i]=='u'){
            risadavogal += risada[i];
        }
    }
    string risadaoriginal = risadavogal;

    reverse(risadavogal.begin(), risadavogal.end());

    if(risadaoriginal == risadavogal){
        cout << "S\n";
    }else{
        cout << "N\n";
    }


    return 0;
}