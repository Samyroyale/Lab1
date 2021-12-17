#include<iostream>
using namespace std;

float fact(float num);

float fact(float num) {
    float factorial;
    float i;
    factorial = 1;
    for (i=2;i<=num;i++) {
        factorial = factorial*i;
    }
    return factorial;
}

int main() {
    float i;
    float num;
    float result;
    float sec;
    cout << "Ingrese el numero para aproximar la secuencia " << endl;
    cin >> num;
    i = 0;
    result = 0;
    while (i!=num) {
        sec = 1/fact(i);
        result = result+sec;
        i = i+1;
    }
    cout << result << endl;
    return 0;
}

