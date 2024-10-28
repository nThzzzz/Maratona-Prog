#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    string base;

    while(cin >> base){
        int cont = 0;

        base+=" ";

        for (size_t i = 0; i < base.length(); i++){
            if((base[i] == 'C' && base[i+1] == 'F')||(base[i] == 'F' && base[i+1] == 'C')){
                cont++;
                base.erase(i, 2);
                i = -1;
            }else if((base[i] == 'B' && base[i+1] == 'S')||(base[i] == 'S' && base[i+1] == 'B')){
                cont++;
                base.erase(i, 2);
                i = -1;
            } 
            
        }

        cout << cont << endl;   
    }

    return 0;
}

// B e S 
// C e F
                
//              CS
//C FCBS F -> C FB
//B CCBS F -> B 