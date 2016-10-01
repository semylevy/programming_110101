#include "pares.h"
#include <stdio.h>

char * pares(char * arreglo, int size)
{
    char * arreglo2;
    arreglo2 = new char [size];
    
    for(int i=0; i<size; i+=2)
    {
        if(!(arreglo[i+1]=='\0'))
        {
            arreglo2[i+1]=arreglo[i];
            arreglo2[i]=arreglo[i+1];
        }
        else
        {
            arreglo2[i]=arreglo[i];
        }

    }

    return arreglo2;
    
}

int main()
{
    int size=5;
    char *arreglo;
    arreglo = new char [size];
    
    arreglo[0]='a';
    arreglo[1]='b';
    arreglo[2]='c';
    arreglo[3]='d';
    arreglo[4]='e';
    
    arreglo=pares(arreglo, size);
    
    for(int i=0; i<size; ++i)
    {
        printf("%c ", arreglo[i]);
    }
}
