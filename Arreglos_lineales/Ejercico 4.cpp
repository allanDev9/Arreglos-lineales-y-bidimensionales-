/*Identificando el numnero mayor*/

#include <iostream>

using namespace std;

int main(){

    int numeros[5]={2,4,7,15,8},mayor=0;

    for(int i=0;i<5;i++){
        if(numeros[i]>mayor){
            mayor=numeros[i];
        }
       
    }
    cout<<"\nEl numero "<<mayor<< " es el numeros mayor." << "\n";

    return 0;
}