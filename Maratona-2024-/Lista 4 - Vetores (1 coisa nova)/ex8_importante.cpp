/*
    USO DE STACK:
        - X.empty() {Verifica se uma stack ta vazia}
        - X.size( {Devolve o valor de int que corresponde ao tamanho dela}
        - X.push() {Adiciona elementos a uma stack de CIMA para BAIXO}
        - X.top() {Mostra o elemento do topo}
        - X.pop() {Remove o elemento do topo}

    OBS:
        * Para realizar uma consulta de algo, ou printar em uma stack é necessário criar um while loop que retire
          todos elementos ate o topo ser correspondente ao elemento desejado.

        * Os elementos são guardados de maneira inversa a ordem que foi colocado para mostrar elementos de maneira cronológica
          é necessário criar uma outra stack e ir adicionando os elementos do topo da stack principal para a auxiliar
*/

#include <iostream>
#include <stack>

using namespace std;

void mostrapar(stack<int> par, int tamanho);
void mostraimpar(stack<int> impar, int tamanho);


int main(){
    stack<int> par;
    stack<int> impar;
    int num;
    
    int contadorpar = 0;
    int contadorimpar = 0;

    for(int i=0; i < 15; i++){
        cin >> num;
        if(num%2==0){
            par.push(num);
            contadorpar+=1;
            if(contadorpar == 5){
                mostrapar(par, par.size());
                contadorpar = 0;
                while(!par.empty()){
                    par.pop();
                }
            }
        }else{
            impar.push(num);
            contadorimpar+=1;
            if(contadorimpar == 5){
                mostraimpar(impar, impar.size());
                contadorimpar = 0;
                while(!impar.empty()){
                    impar.pop();
                }
            }
        }
    }
    mostraimpar(impar, impar.size());
    mostrapar(par, par.size());


    return 0;
}


void mostrapar(stack<int> par, int tamanho){
    stack<int> auxpar;
    while(!par.empty()){
        auxpar.push(par.top());
        par.pop();
    }

    while(!auxpar.empty()){
        for(int i=0; i<tamanho; i++){
            cout << "par[" << i << "] = " << auxpar.top() << endl;
            auxpar.pop();   
        }
    }

}

void mostraimpar(stack<int> impar, int tamanho){
    stack<int> auximpar;
    while(!impar.empty()){
        auximpar.push(impar.top());
        impar.pop();
    }

    while(!auximpar.empty()){
        for(int i=0; i<tamanho; i++){
            cout << "impar[" << i << "] = " << auximpar.top() << endl;
            auximpar.pop();   
        }
    }
}


