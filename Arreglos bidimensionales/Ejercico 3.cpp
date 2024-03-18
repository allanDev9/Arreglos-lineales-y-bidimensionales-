/*Realice un programa que calcule la suma de dos 
matrices cuadradas de 3x3. */

#include <iostream>

using namespace std;

int main(){
    int matriz1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matriz2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    //Mostrando las matrices
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz1[i][j]<<" ";
        }
       cout<<"\n";
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz2[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    //Sumando matrices
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz1[i][j]+matriz2[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}