#include <iostream>

using namespace std;

int main(){
    int vezes;
    cin >> vezes;
    
    for(int i=0; i<vezes; i++){
        int leds=0;
        string num;

        cin >> num;
        for(int i=0; i<num.size(); i++){
            switch (num[i]){
            case '1':
                leds += 2;
                break;
            case '2':
                leds += 5;
                break;
            case '3':
                leds += 5;
                break;
            case '4':
                leds += 4;
                break;
            case '5':
                leds += 5;
                break;
            case '6':
                leds += 6;
                break;
            case '7':
                leds += 3;
                break;
            case '8':
                leds += 7;
                break;
            case '9':
                leds += 6;
                break;
            case '0':
                leds += 6;
                break;
            default:
                break;
            }
        }

        cout << leds << " leds" << endl;
    }

    return 0;
}