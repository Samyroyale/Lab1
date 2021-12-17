#include <iostream>

using namespace std;

int main()
{
    int hora1=0,hora2=0,minutos1=0,minutos2=0,minutosTot=0;

    cout<<"Ingrese la primera hora:"<<endl;
    cin>>hora1;
    //se toma el numero de minutos y se verifica que este bien
    minutos1= hora1-(hora1/100)*100;
    if(minutos1<0 or minutos1>=60){
        cout<<"El dato ingresado "<<minutos1<<" es invalido"<<endl;
        return 0;
    }
    hora1/=100;
    if(hora1<0 or hora1>24) {
        cout<<"El dato ingresado "<<hora1<<" es invalido"<<endl;
        return 0;
    }

    cout<<"Ingrese la segunda hora:"<<endl;
    cin>>hora2;
    //se toma el numero de minutos y se verifica que este bien
    minutos2 = hora2-(hora2/100)*100;
    if(minutos2<0 or minutos2>=60) {
        cout<<"El dato ingresado "<<minutos2<<" es invalido"<<endl;
        return 0;
    }
    hora2/=100;
    if(hora2<0 or hora2>24) {
        cout<<"El dato ingresado "<<hora2<<" es invalido"<<endl;
        return 0;
    }
    minutosTot = minutos1 + minutos2;
    //se cuenta el numero de minutos y se pasa a horas
    for(;minutosTot>=60;minutosTot-=60)
        hora1++;

    if(hora1+hora2>24){
        cout<<"La suma de horas es "<<hora1+hora2<<" y es mayor a 24"<<endl;
        return 0;
    }
    else if(minutosTot<10) cout<<"La hora es:"<<(hora1+hora2)*10<<minutosTot<<endl;
    else cout<<"La hora es:"<<hora1+hora2<<minutosTot<<endl;

    return 0;
}
