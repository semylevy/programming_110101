#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int * arreglo;
    
    arreglo = (int *) malloc(1);
    
    for (int i=0; i<200; ++i)
    {
        *(arreglo+i)=100;
    }
    
    for (int i=0; i<200; ++i)
    {
        printf("%i ", *(arreglo+i));
    }
}