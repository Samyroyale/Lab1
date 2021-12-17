
#include<iostream>
#include<cmath>
using namespace std;




float inv(int x) {
    float inver;
    float n;
    float n1;
    string op;
    float pal;
    n1 = x;
    inver = 0;
    do {
        inver = (inver*10)+(x%10);
        x = int(x/10);
    } while (x>0);
    if (inver==n1) {
        pal = 1;
    } else {
        pal = 2;
    }
    return pal;
}

int main() {
    float a;
    float b;
    float fnum;
    float i;
    float j;
    float may;
    float num;
    may = 0;
    for (i=100;i<=999;i++) {
        for (j=100;j<=999;j++) {
            num = i*j;
            if (inv(num)==1 && num>may) {
                a = i;
                b = j;
                fnum = num;
            }
        }
    }
    cout << a << " * " << b  << " = " << fnum << endl;
    return 0;
}


