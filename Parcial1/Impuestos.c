#include <stdio.h>

int impuesto(int dinero)
{
    int valor;
    
    if (dinero<=20000)
    {
        valor=20000;
        return valor;
    }
    else
    {
        if(dinero<=40000)
        {
            valor=((dinero-20000)*.3)+dinero;
            return valor;
        }
        else
        {
            if(dinero<=80000)
            {
                valor=(((dinero-40000)*.4)+6000+dinero);
                return valor;
            }
            else
            {
                valor=(((dinero-80000)*.5)+22000+dinero);
                return valor;
            }
        }
    }
    
}

int main()
{
    int dinero = 100000;
    int resultado = impuesto(dinero);
    
    printf ("El resultado es %i", resultado);
    return 1;
}
