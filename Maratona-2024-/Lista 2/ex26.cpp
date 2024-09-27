#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){
    int vezes, fora, dentro, num;

    cin >> vezes;
    dentro = 0;
    fora = 0;
    for(int i = 0; i < vezes; i++){
        cin >> num;
        if(num >= 10 && num <= 20){
            dentro += 1;
        }else{
            fora += 1;
        }
    }

    cout << dentro << " in\n";
    cout << fora << " out\n";   

    return 0;
}