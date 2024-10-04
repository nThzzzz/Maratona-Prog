#include <iostream>
#include <string>

using namespace std;

int main(){
    int C;
    cin >> C;

    for(int i=0; i<C; i++){
        string Rajesh, Sheldon;
        cin >> Rajesh  >> Sheldon;

        if(Rajesh == Sheldon){
            cout << "empate\n";
        }else if(Rajesh == "tesoura"){
            if(Rajesh=="tesoura" && (Sheldon=="papel" || Sheldon=="lagarto")){ // Rajesh ganha
                cout << "rajesh\n";
            }else{
                cout << "sheldon\n";
            }
        }else if(Rajesh == "papel"){
            if(Rajesh=="papel" && (Sheldon=="pedra" ||  Sheldon=="spock")){ // Rajesh ganha
                cout << "rajesh\n";
            }else{
                cout << "sheldon\n";
            }
        }else if(Rajesh == "lagarto"){
            if(Rajesh=="lagarto" && (Sheldon=="pedra" || Sheldon=="spock")){ // Rajesh ganha
                cout << "rajesh\n";
            }else{
                cout << "sheldon\n";
            }
        }else if(Rajesh == "spock"){
            if(Rajesh=="spock" && (Sheldon=="tesoura" || Sheldon=="pedra")){ // Rajesh ganha
                cout << "rajesh\n";
            }else{
                cout << "sheldon\n";
            }
        }else if(Rajesh == "pedra"){
            if(Rajesh=="pedra" && (Sheldon=="lagarto" || Sheldon=="tesoura")){ // Rajesh ganha
                cout << "rajesh\n";
            }else{
                cout << "sheldon\n";
            }
        }
    }


    return 0;
}