#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    long int x, y, soma;

    cin >> x >> y;
    soma = 0;

    int ini = min(x, y);
    int fim = max(x, y);

    for(int i = ini+1; i < fim; i++){
        if(i%2!=0){
            soma+=i;
        }
    }

    cout << soma << endl;

    return 0;
}