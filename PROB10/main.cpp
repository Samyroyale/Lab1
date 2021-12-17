#include<iostream>
using namespace std;

int main() {
    int contador;
    int n;
    int num;
    int prime;
    int x;

    cout << "Ingrese un numero " << endl;
    cin >> n;
    prime = 0;
    num=0;
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
    cout << prime << endl;
    return 0;
}


