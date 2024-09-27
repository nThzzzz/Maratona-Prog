#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int s, horas, minutos, segundos;

    minutos = segundos/60;
    horas = minutos/60;
    segundos = s - (minutos*60);

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}