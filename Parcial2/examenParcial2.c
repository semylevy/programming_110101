#include <stdio.h>
#include "examenParcial2.h"

void parte(char * arreglo, int size)
{
    char * mitad1;
    char * mitad2;
    mitad1 = new char[size/2];
    mitad2 = new char[size/2];
    int contador=0;
    int extra=0;
    
    if(size%2!=0)
    {
        ++size;
        ++extra;
    }
    
    printf("Mitad 1: ");
    for(int i=0; i<size/2; ++i)
    {
        mitad1[i]=arreglo[i];
        ++contador;
        printf("%c ", mitad1[i]);
    }

    size=size-extra;
    
    printf("\nMitad 2: ");
    for(int i=0; i<size/2; ++i)
    {
        mitad2[i]=arreglo[contador];
        printf("%c ", mitad2[i]);
        ++contador;
    }
    
}

int main()
{
    int size=7;
    char * arreglo;
    arreglo=new char [size];
    
    arreglo[0]='a';
    arreglo[1]='b';
    arreglo[2]='c';
    arreglo[3]='d';
    arreglo[4]='e';
    arreglo[5]='f';
    arreglo[6]='g';
    
    parte(arreglo, size);
    
    return 1;
}