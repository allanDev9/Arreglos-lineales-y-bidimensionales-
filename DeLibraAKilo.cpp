#include <iostream>

using namespace std;

int main(){

float precio,cantidad,result;

cout<<"Ingrese el precio y la cantidad: ";
cin>>precio>>cantidad;


result=precio*0.15*cantidad;

cout<<"El monto a pagar es de: " <<result;

return 0;

}