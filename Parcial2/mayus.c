#include "mayus.h"
#include <stdio.h>

int * mayuscula(int * arreglo)
{
    for(int i=0;arreglo[i] != '\0'; ++i)
    {
        arreglo[i]=arreglo[i]-32;
    }
    return arreglo;
}

int main()
{

    int *arreglo;
    int size = 10;
    arreglo = new int [size];
    
    for (int i=0;i<size;++i)
    {
        arreglo[i]=i+97;
    }
    
    arreglo=mayuscula(arreglo);
        
    for(int i=0; i<size; ++i)
    {
        printf("%c ", arreglo[i]);
    }

    
}
 
