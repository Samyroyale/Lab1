
#include<iostream>
#include<cmath>
using namespace std;


int collatz(int num);

int collatz(int num) {
    int elem;
    elem = 1;
    cout << " [" << num << "]: ";
    while (num>1) {
        elem = elem+1;
        if (num%2==0) {
            num = int(num/2);
        } else {
            num = num*3+1;
        }
        cout << num << " ";
    }
    cout << " " << endl;
    return elem;
}

int main() {
    int contador;
    int elementos;
    int input;
    int n;
    int num;
    int numprime;
    int prime;
    int x;
    cout << "Ingrese un numero " << endl;
    cin >> n;
    input = n;
    prime = 0;
    numprime = 0;
    contador=0;
    while (n>0) {
        num = num+1;
        x = 1;
        contador = 0;
        while (x<=num) {
            if (num%x==0) {
                contador = contador+1;
            }
            x = x+1;
        }
        if (contador==2) {
            prime = num;
            n = n-1;
        }
    }
    numprime = prime;
    elementos = collatz(numprime);
    cout << "EL NUMERO PRIMO EN LA POSICION " << input << " ES " << prime << " Y GENERA UNA SERIE TENIENDO " << elementos << " TERMINOS" << endl;
    return 0;
}
