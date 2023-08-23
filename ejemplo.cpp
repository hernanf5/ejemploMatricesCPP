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
        int menor = 101;
        int auxiliar;
        //inicializo a i con el valor k/filas para que no recorra toda la matriz cada vez que itera (también se puede hacer con i=0)
        for (int i = k/filas; i < filas; i++)
        {
                for (int j = 0; j < columnas; j++){
                    /*agrego una segunda condición, la cual evalúa la posición del valor menor encontrado con respecto a la posición actual 
                    que se esta analizando*/
                    if(matriz[i][j]<menor && i*10 + j >= (k/filas*10 + k%columnas)) {
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