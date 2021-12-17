#include<iostream>
#include<cmath>
using namespace std;

int cambio(int cant, int tipe) {
    int billetes;
    float resto;
    cout << tipe << ": ";
    billetes = int(cant/tipe);
    resto = cant%tipe;
    cout << billetes << endl;
    return resto;
}

int main() {
    float cantidad;
    float resto;

    cout << "Ingrese la cantidad " << endl;
    cin >> cantidad;

    resto = cambio(cantidad,50000);
    resto = cambio(resto,20000);
    resto = cambio(resto,10000);
    resto = cambio(resto,5000);
    resto = cambio(resto,2000);
    resto = cambio(resto,1000);
    resto = cambio(resto,500);
    resto = cambio(resto,200);
    resto = cambio(resto,100);
    resto = cambio(resto,50);

    cout<<"Faltante: "<<resto;
    return 0;
}
