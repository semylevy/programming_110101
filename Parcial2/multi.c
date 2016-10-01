#include "multi.h"
#include <stdio.h>
#include <math.h>

int multiplicaPart(int valor1, int valor2)

{

    int resultado;
    float temporal1=valor1;
    double temporal2=valor2;
    int izquierda1;
    int izquierda2;
    int derecha1;
    int derecha2;
    int var1;
    int var2;
    int var3;
    int var4;
    int contador1=0;
    int contador2=0;
    int potencia;
    
    while(temporal1>1)
    {
        temporal1/=10;
        ++contador1;
    }

    
    while (temporal2>1)
    {
        temporal2/=10;
        ++contador2;
    }
    
    if (contador1>contador2)
    {
        while (contador1>contador2)
        {
            temporal2/=10;
            ++contador2;
        }
        
    }
    
    if (contador2>contador1)
    {
        while (contador2>contador1)
        {
            temporal1/=10;
            ++contador1;
        }
    }
    
    if (!(contador1%2==0))
    {
        temporal1/=10;
        temporal2/=10;
        ++contador1;
        ++contador2;
    }
    
    for(int i=contador1/2; i>0; --i)
    {
        temporal1*=10;
        temporal2*=10;
    }
    
    izquierda1=temporal1;
    izquierda2=temporal2;
 
    for(int i=contador1/2; i>0; --i)
    {
        temporal1*=10;
        temporal2*=10;
    }
    
    
    potencia=pow(10, contador1/2);
    derecha1=temporal1;
    derecha1=derecha1%(potencia);
    
    derecha2=temporal2;
    derecha2=derecha2%(potencia);
    
    
    var1=izquierda1*izquierda2;
    for(int i=contador1; i>0; --i)
    {
        var1*=10;
    }

    var2=izquierda1*derecha2;
    for(int i=contador1/2; i>0; --i)
    {
        var2*=10;
    }

    var3=derecha1*izquierda2;
    for(int i=contador1/2; i>0; --i)
    {
        var3*=10;
    }

    var4=derecha1*derecha2;

    
    resultado=var1+var2+var3+var4;
    
    return resultado;

}