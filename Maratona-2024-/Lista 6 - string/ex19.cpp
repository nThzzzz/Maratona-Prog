#include <iostream>
#include <string>

using namespace std;

int main(){

    string tt;
    getline(cin, tt);

    if(tt.size()>140){
        cout << "MUTE\n";
    }else{
        cout << "TWEET\n";
    }    
    
    return 0;
}