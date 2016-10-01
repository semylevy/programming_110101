#include "contar5.h"
#include <stdio.h>

void contar5()
{
    int *num;
    num=new int;
    *num=0;
    
    int *contador;
    contador=new int;
    *contador=0;
    
    while (*num>=0)
    {
        printf("Escribe un número:\n");
        scanf("%i", &*num);
        if (*num==5)
        {
            *contador++;
        }
    }
    
    printf("El 5 se repitió %i veces", *contador);
}