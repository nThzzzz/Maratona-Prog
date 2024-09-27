#include <iostream>

using namespace std;

int main(){
    int arr[10];

    for(int i = 0; i<10; i++){
        int num;
        cin >> arr[i];
        if(arr[i] < 0 || cin.fail() || arr[i]==0){
            arr[i]=1;
        }
    }

    for(int i = 0; i < 10; i++){
        cout << "X[" << i << "] = " << arr[i] << endl;
    }

    
    return 0;
}