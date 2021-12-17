#include<iostream>
using namespace std;


int esprimo(int x);

int esprimo(int x) {
    int cont;
    int i;
    cont = 0;
    for (i=1;i<=x;i++) {
        if (x%i==0) {
            cont = cont+1;
        }
    }
    return cont;
}

int main() {
    int i;
    int mayprimo;
    int x;
    cout << "Ingrese un numero " << endl;
    cin >> x;
    mayprimo = 0;
    for (i=1;i<=x;i++) {
        if (x%i==0) {
            if (esprimo(i)==2) {
                mayprimo = i;
            }
        }
    }
    cout << mayprimo << endl;
    return 0;
}


