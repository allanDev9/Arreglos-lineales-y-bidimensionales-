/*Hacer un programa que lea 5 numeros en un arreglo,
los copie a otro arreglo multiplicados por 2 y muestre
el segundo arreglo. */

#include <iostream>

using namespace std;

int main(){

    int n1[]={1,2,3,4,5};
    int n2[5];
    int multi;
    
    for(int i=0;i<5;i++){
        n2[i]=n1[i]*2;
    }
    for(int i=0;i<5;i++){
        cout<<n2[i]<<"\n";
    }

   

    return 0;
}