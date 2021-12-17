#include<iostream>
using namespace std;

int multiplos(int x, int n);
int comunes(int n1, int n2, int c);

int multiplos(int x, int n) {
    int i;
    int multi;
    int sum;
    i = 1;
    multi = x;
    sum = 0;
    while (multi<n) {
        sum = sum+multi;
        i = i+1;
        multi = x*i;
    }
    return sum;
}

int comunes(int n1, int n2, int c) {
    int cont;
    int fact;
    int total;
    if (n2<n1) {
        n1 = n2;
        n2 = n1;
    }
    cont = 0;
    total = 0;
    fact=0;
    while (fact<c) {
        fact = n1*cont;
        if (fact%n2==0) {
            total = total+fact;
        }
        cont = cont+1;
    }
    return total;
}

int main() {
    int a;
    int b;
    int c;
    int h;
    int resultado;
    int w;
    int x;
    int z;
    cout << "Escriba el primer numero " << endl;
    cin >> a;
    cout << "Escriba el segundo numero " << endl;
    cin >> b;
    cout << "Escriba el limite " << endl;
    cin >> c;
    if (a>b) {
        h = a;
        a = b;
        b = h;

    }
    x = multiplos(a,c);

    z = multiplos(b,c);

    w = comunes(a,b,c);

    cout << (x+z)-w << endl;
    return 0;
}

