#include<iostream>
using namespace std;

int main() {
     int a, b, c, d, N, n;
             cout << " Ingrese el primero numero: " ;
             cin >> N;
             cout << " Ingrese el segundo numero: " ;
             cin >> n;
             a = N / 100 ;
             b = N- (a * 100 );
             c = n / 100 ;
             d = n- (c * 100 );
             if (a> 24 || b> 59 || c> 24 || d> 59 ) {
                 cout << " uno de los datos ingresados ​​es invalido " << endl;
             }
             else {
             a = a + c;
             b = b + d;
             if (b> 59 ) {
                 a = a + 1 ;
                 b = 60 -b;
             }
             b = b * - 1 ;
             cout << " La hora es: " << a << b << endl;
             }
    return 0;
}
