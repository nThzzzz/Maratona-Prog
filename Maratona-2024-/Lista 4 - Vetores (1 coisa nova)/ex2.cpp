#include <iostream>

using namespace std;

int main(){
    int arr[10], num;

    cin >> num;

    for(int i = 0; i < 10; i++){
        if(i == 0){
            arr[i] = num;
        }else{
            arr[i] = 2*arr[i-1];
        }
    }

    for(int i = 0; i < 10; i++){
        cout << "N[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}