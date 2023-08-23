#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

int main(){
    int filas, columnas;
    
    cout <<"Ingrese la cantidad de filas: "<< endl;
    cin >> filas;
    cout <<"Ingrese la cantidad de columnas: "<< endl;
    cin >> columnas;
    int matriz[filas][columnas];
    srand(time(NULL));
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            
            matriz[i][j] = rand() % 101;
            
        }
        
    }
    
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout <<"["<< matriz[i][j] <<"]" ;
        }
        cout <<endl;
    }

    
    for (int k = 0; k < filas*columnas; k++)
    {   
        int posI;
        int posJ;
        int menor = 100;
        int auxiliar;
        for (int i = 0; i < filas; i++)
            {
                for (int j = 0; j < columnas; j++)
                    {
                        if(matriz[i][j]<menor){
                        menor = matriz[i][j];
                        posI = i;
                        posJ = j; 
                    }
                    
            }
        
        }
        auxiliar = matriz[k/filas][k%columnas];
        matriz[k/filas][k%columnas] = menor;
        matriz[posI][posJ] = auxiliar;
        cout << auxiliar<<" | "<< menor <<" | "<<k <<" | "<< k/filas<<" | "<< k%columnas<< endl;
    }
    cout << endl;
    
    for(int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout <<"["<< matriz[i][j] <<"]" ;
        }
        cout <<endl;
    }
    
    

}