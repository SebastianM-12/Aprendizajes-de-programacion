#include "contar.h"
#include <iostream>
using namespace std;

contar::contar() {
    *x = 0;

}


void contar::establecernum(){
    cout<<"Ingrese un numero "<<endl;
    int num = 0;
    cin>>num;
    *x = num;
}

void contar::imprimir(){
    cout<<"el numero ingresado es: "<<*x<<endl;
}
