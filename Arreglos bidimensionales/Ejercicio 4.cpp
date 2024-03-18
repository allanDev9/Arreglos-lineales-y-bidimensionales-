/*Realice un programa que calcule el producto 
de dos matrices cuadratas de 3x3. */

#include <iostream>

using namespace std;

int main(){
    int matriz1[3][3]={{4,1,6},{9,5,9},{8,3,0}};
    int matriz2[3][3]={{6,3,2},{8,0,0},{1,4,1}};


    cout<<"Matriz #1\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz1[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"Matriz #2\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz2[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"Producton de las dos matrices\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz1[i][j]*matriz2[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}