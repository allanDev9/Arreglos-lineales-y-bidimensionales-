/*Mostrar los elementos de un arreglo*/

   #include <iostream>

   using namespace std;
   int main(){

        int numeros[]={1,2,3,4,5}; //Denir arreglo

        for(int i=0;i<5;i++){    //Imprimir arreglos
            cout<<numeros[i]<<"\n";
        }

        return 0;
   }