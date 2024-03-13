

   #include <iostream>

   using namespace std;
   int main(){

        int numeros[100], n;

        cout<<"Digite el tamanio del arreglo: ";
        cin>>n;

        for(int i=0;i<n;i++){
            cout<<i+1<<". Digite un numero: ";
            cin>>numeros[i];
        }
        
   }