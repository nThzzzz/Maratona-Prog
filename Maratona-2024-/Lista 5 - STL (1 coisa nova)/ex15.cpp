#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

    string eqs;
    map<char, int> idioma;

    cin >> eqs;

    for(char ch : eqs){
        if(ch == '^'){
            idioma.insert (pair<char,int>(ch, 3));
        }else if(ch == '*' || ch == '/'){
            idioma.insert (pair<char,int>(ch, 2));
        }else if(ch == '+' || ch == '-'){
            idioma.insert (pair<char,int>(ch, 1));
        }else{
            idioma.insert (pair<char,int>(ch, 0));
        }
    }

    for(char ch : eqs){
        auto it = idioma.find(ch);
        cout<<

        } 
    }
    return 0;
}