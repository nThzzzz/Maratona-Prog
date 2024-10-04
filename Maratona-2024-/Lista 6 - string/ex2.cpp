#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> fibo(n);

    for(int i = 0; i < n; i++){
        if(i==0){
            fibo[i] = 0;
        }else if(i==1){
            fibo[i] = 1;
        }else{
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
    }   

    for(int i=0; i<n; i++){
        if(i==n-1){
            cout << fibo[i] << endl;
        }else{
            cout << fibo[i] << " ";
        }
    }

    return 0;
}