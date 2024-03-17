/*Invertir un arreglo*/

#include <iostream>

using namespace std;

int main(){
    
    int numeros[]={1,2,3,4,5}; //Definir el arreglo
    
    for(int i=4;i>=0;i--){   //Invertir arreglo,inicializando desde la posicion 0
        cout<<numeros[i]<<"\n";
    }

    return 0;
}