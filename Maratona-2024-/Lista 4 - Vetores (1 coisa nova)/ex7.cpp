#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double arr[100], num;

    cin >> num;
    for(int i=0; i<100; i++){
        arr[i] = num;
        num /=2;
    }

    for(int i=0; i < 100; i++){
        cout << "N[" << i << "] = " << fixed << setprecision(4) << arr[i] << endl;
    }


    return 0;
}