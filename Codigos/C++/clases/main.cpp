#include <iostream>
#include "contar.h"
using namespace std;

int main()
{
    contar numero;
    cout<<"Ejecutando programa"<<endl;
    numero.establecernum();
    numero.imprimir();


    //uso de punteros(indireccion) repaso

    int *pun = 0;
    int valor = 0;
    cout<<"iNGRESE UN VALOR PARA LA VARIABLE PUN(QUE ES UN PUNTERO)"<<endl;
    cin>>valor;
    pun = &valor;
    cout<<"El valor de pun es: "<<*pun<<endl;

    //uso de referencias(direccion)

    int valor2;
    cout<<"Ingrese un valor para la variable de direccion: "<<endl;
    cin>>valor2;
    int &refpun = valor2;
    cout<<"El valor de la variable direccion es : "<<refpun<<endl;




    return 0;
}
