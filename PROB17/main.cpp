#include<iostream>
using namespace std;

int div(int x) {
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
    int divi;
    int h;
    int k;
    int num;
    cout << "Ingrese el numero de divisores " << endl;
    cin >> k;
    divi = 1;
    h = 1;
    while (divi<k) {
        num = h*(h+1)/2;
        divi = div(num);
        h = h+1;
    }
    cout << "El numero es " << num << " que tiene " << divi << " divisores" << endl;
    return 0;
}

