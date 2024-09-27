#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int s, horas, minutos, segundos;

    cin >> s;

    minutos = s/60;
    horas = minutos/60;
    segundos = s - (minutos*60);
    minutos = minutos - (horas*60);

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}