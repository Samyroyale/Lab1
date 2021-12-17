#include<iostream>
#include<cmath>
using namespace std;


float collatz(int num);

float collatz(int num) {
    float elem;
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
    float i;
    int k;
    float large;
    float seed;
    float x;
    cout << "Ingrese un numero " << endl;
    cin >> k;
    large = 0;
    seed = 0;
    for (i=k;i>=2;i--) {
        x = collatz(i);
        if (x>large) {
            large = x;
            seed = i;
        }
    }
    cout << "LA SERIE MAS LARGA ES CON LA SEMILLA " << seed << " CON " << large << " ELEMENTOS " << endl;
    return 0;
}


