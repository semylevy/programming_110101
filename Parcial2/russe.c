#include <stdio.h>
#include "russe.h"

int russe(int divisor, int dividendo)
{
    int sor[100];
    int dendo[100];
    int contador=1;
    int contador2=1;
    int res[100];
    int resultado=0;
    
    sor[0]=divisor;
    dendo[0]=dividendo;
    
    for(int i=divisor; i!=1; i/=2)
    {
        sor[contador]=divisor/2;
        divisor=divisor/2;
        contador=contador+1;
        
    }
    
    for(int i=contador; i!=1; --i)
    {
        dendo[contador2]=dividendo*2;
        dividendo=dividendo*2;
        contador2=contador2+1;
    }
    
    for(int i=0; i<contador2; ++i)
    {
        if(!(sor[i]%2==0))
        {    
            resultado=(resultado+dendo[i]);
        }
    }
    
    return resultado;
    
}