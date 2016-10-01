#include "arreglo2.h"
#include <stdio.h>

int funcion(int * arreglo, int size)
{
    int * arreglo2;
    int * arreglo3;
    int contador=size/3;
    int res=0;
    
    arreglo2 = new int[size/3];
    arreglo3 = new int[(size/3)*2];
   
    printf ("Primer sub-arreglo:\n"); 
    for (int i=0; i<(size/3); ++i)
    {
        *(arreglo2+i)=*(arreglo+i);
        printf("%i", *(arreglo2+i));
    }
    
    printf("\nSegundo sub-arreglo:\n");
    for(int i=0; i<((size/3)*2); ++i)
    {
        *(arreglo3+i)=*(arreglo+contador);
        ++contador;
        printf("%i", *(arreglo3+i));
    }
    
    for(int i=0; i<(size/3); ++i)
    {
        res=res+(*(arreglo2+i));
    }
    
    delete[] arreglo2;
    delete[] arreglo3;
    
    return res;
    
}

int main()
{
    int * arreglo;
    int size=10;
    arreglo = new int[size];
    
    *(arreglo)=0;
    *(arreglo+1)=1;
    *(arreglo+2)=2;
    *(arreglo+3)=3;
    *(arreglo+4)=4;
    *(arreglo+5)=5;
    *(arreglo+6)=6;
    *(arreglo+7)=7;
    *(arreglo+8)=8;
    *(arreglo+9)=9;

    
    int var=funcion(arreglo, size);
    printf("\nSuma del primer sub-arreglo: %i\n", var);
    
    return 1;
}