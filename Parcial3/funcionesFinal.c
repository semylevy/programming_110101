#include "funcionesFinal.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Versión corchetes para manipular matrices
void randMatrizArielVersionCorchetes(int*** matrix, int renglones, int columnas, int min, int max)
{
    matrix[0] = new int*[renglones];
    for (int i = 0; i < renglones; i++)
    {
        matrix[0][i] = new int[columnas];
        for (int j = 0; j < columnas; j++) 
        {
            matrix[0][i][j] = rand()%(min-max)+min;
        }
    }
    
}
// Versión aritmética de apuntadores
void randMatrizArielVersionAritmeticaApuntadores(int***matrix, int renglones, int columnas, int min, int max)
{
    *matrix = new int*[renglones];
    for (int i = 0; i < renglones; i++)
    {
        *((*matrix)+i) = new int[columnas];
        for (int j = 0; j < columnas; j++) 
        {
            *(*((*matrix)+i)+j) = rand()%(min-max)+min;
        }
    }    
}


void imprimeMatrizChar(char ** matriz, int renglones, int columnas)
{
    for (int i=0; i<renglones; ++i)
    {
        for(int y=0; y<columnas; ++y)
        {
            printf("%c ", matriz[i][y]);
        }
        printf("\n");
    }
}

void imprimeMatrizInt(int ** matriz, int renglones, int columnas)
{
    for (int i=0; i<renglones; ++i)
    {
        for(int y=0; y<columnas; ++y)
        {
            if(matriz[i][y]<10)
            {
                printf("%i  ", matriz[i][y]);
            }
            else
            {
                printf("%i ", matriz[i][y]);
            }
            
        }
        printf("\n");
    }
}

int cuentaArregloInt(int * arreglo)
{
    int var=0;
    for (int i=0; *(arreglo+i)!='\0'; ++i)
    {
        ++var;
    }
    return var;
}

int cuentaArregloChar(char * arreglo)
{
    int var=0;
    for (int i=0; *(arreglo+i)!='\0'; ++i)
    {
        ++var;
    }
    return var;
}

char ** randMatrizChar(char ** matriz, int renglones, int columnas)
{
    srand(time(NULL));
    matriz = new char* [renglones];
    for(int i=0; i<renglones; ++i)
    {
        matriz[i]=new char [columnas];
    }
    
    for(int i=0; i<renglones; ++i)
    {
        for(int y=0; y<columnas; ++y)
        {
            matriz[i][y]=rand()%25+97;
        }
    }
    return matriz;
}

int ** randMatrizInt(int ** matriz, int renglones, int columnas, int min, int max)
{
    int var=max-min;
    srand(time(NULL));
    matriz = new int* [renglones];
    for(int i=0; i<renglones; ++i)
    {
        matriz[i]=new int [columnas];
    }
    
    for(int i=0; i<renglones; ++i)
    {
        for(int y=0; y<columnas; ++y)
        {
            matriz[i][y]=rand()%var+min;
        }
    }
    return matriz;

}

void randArregloInt(int **arreglo, int size)
{
    srand(time(NULL));
    *(arreglo)=new int [size];
    
    for(int i=0; i<size; ++i)
    {
        *((*arreglo)+i)=rand()%100;
    }
}

void imprimeArregloInt(int **arreglo, int size)
{
    for (int i=0; i<size; ++i)
    {
        printf("%i ", *((*arreglo)+i));
    }
    printf("\n");
}

bool esPrimo(int num)
{
    for(int i=2; i<num; ++i)
    {
        if(num%i==0)
    {
      return false;
    }
  }
  return true;
}