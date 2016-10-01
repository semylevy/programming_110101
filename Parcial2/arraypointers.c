#include "arraypointers.h"
#include <stdio.h>

int * fillWith1(int *arreglo, int size)
{
    for (int i=0; i<size; ++i)
    {
        arreglo[i]=1;
    }
    
    return arreglo;
}

int * duplica(int *arreglo, int size)
{
    for (int i=0; i<size; ++i)
    {
        arreglo[i]*=2;
    }
    
    return arreglo;
}

int main()
{
    int *arreglo;
    int size = 10;
    arreglo = new int [size];
    
    arreglo = fillWith1(arreglo, size);
    arreglo = duplica(arreglo, size);
    
    for(int i=0;i<size;++i)
    {
        printf("%i ", arreglo[i]);
    }
    
    return 1;
}
