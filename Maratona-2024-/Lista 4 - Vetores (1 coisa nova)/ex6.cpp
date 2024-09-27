#include <iostream>

using namespace std;

int main(){
    int arr[1000], n, numero = 0;

    cin >> n;
    for(int i = 0; i < 1000; i++){
        if(numero == n){
            numero = 0;
        }
        arr[i] = numero;
        numero+=1;
    }

    for(int i = 0; i < 1000; i++){
        cout << "N[" << i << "] = " << arr[i] << endl; 
    }

    return 0;
}