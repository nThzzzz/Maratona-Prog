#include <iostream>

using namespace std;

int main(){
    int vezes, n;
    long long int fibo[100];

    for(int i = 0; i < 100; i++){
        if(i==0){
            fibo[i] = 0;
        }else if(i==1){
            fibo[i] = 1;
        }else{
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
    }   

    cin >> vezes;

    for(int i = 0; i < vezes; i++){
        cin >> n;
        if(n == 0){
            cout << "Fib(" << n << ") = " << 0 << endl;
        }else{
            for(int j=0; j < n; j++){
                if(j==n-1){
                    cout << "Fib(" << n << ") = " << fibo[j+1] << endl;
                }
            }
        }
    }

    

    return 0;
}