/*Hacer una matriz preguntando al usuario el numero 
de filas y columnas, llenarla de un numeros aleatorios,
copiar el contenido a otra matriz y por ultimo moestrarla 
en pantalla*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int matriz1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matriz2[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matriz2[i][j]=matriz1[i][j];
        }
    }
    for (int i=0;i<3; i++){
        for(int j=0;j<3;j++){
            cout<<matriz2[i][j]<<" ";
        }
        cout<<"\n";
    }
    

    return 0;
}