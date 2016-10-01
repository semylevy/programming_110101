#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcionesFinal.h"

int main()
{
    
    int renglones = 10;
    int columnas = 10;
    int ** matriz;
    char ** matrizC;
    int * arreglo;
    int size=10;
    
    int **testAriel;
    
    printf("-------------------------- \n");
    randMatrizArielVersionCorchetes(&testAriel, renglones, columnas, 97,122);
    imprimeMatrizInt(testAriel, renglones, columnas);
    printf("-------------------------- \n");
        
    matriz=randMatrizInt(matriz, renglones, columnas, 0, 100);
    matrizC=randMatrizChar(matrizC, renglones, columnas);
    
    imprimeMatrizInt(matriz, renglones, columnas);
    imprimeMatrizChar(matrizC, renglones, columnas);
    
    randArregloInt(&arreglo, size);
    
    
    
}
