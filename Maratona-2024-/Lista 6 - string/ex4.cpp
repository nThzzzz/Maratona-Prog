#include <iostream>
#include <string>

using namespace std;

int main(){

    string palavra;

    while(getline(cin, palavra)){
        string palavraorignal = palavra;

        int cont = 0;
        for(int i=0; i<palavra.size(); i++){
            if(cont%2==0 && palavra[i]!=' '){
                palavra[i] = toupper(palavra[i]);
                cont += 1;
            }else if(cont%2!=0 && palavra[i]!=' '){
                palavra[i] = tolower(palavra[i]);
                cont += 1;
            }
        }

        cout << palavra << endl;
    }

    return 0;
}