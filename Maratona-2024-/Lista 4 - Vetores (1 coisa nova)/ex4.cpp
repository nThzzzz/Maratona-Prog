#include <iostream>

using namespace std;

int main(){
    int arr[20];

    for(int i = 20; i>0; i--){
        cin >> arr[i-1];
    }
    
    for(int i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << arr[i] << endl; 
    }

    return 0;
}