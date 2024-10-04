#include <iostream>
#include <string>

using namespace std;

int main(){
    while(true){
        int a, b;
        string num, final;

        cin >> a >> b;

        if(a==0 && b==0){
            break;
        }
        int soma=a+b;

        num = to_string(soma);

        for(int i=0; i<num.size(); i++){
            if(num[i]!='0'){
                final += num[i];
            }
        }
        cout << final << endl;
    }

    return 0;
}