#include <stdio.h>

int perf(int numero)
{
    
    int contador;
    for(int i=numero-1;i>0;i=i-1)
    {
        if(numero%i==0)
        {
            contador=contador+i;
        }
    }
    
    if(contador==numero)
    {
        printf("El número %i es natural perfecto.", numero);
    }
    else
    {
        printf("El número %i no es natural perfecto.", numero);
    }
}

int main()
{
    int nume;
    printf("Dame un numero\n");
    scanf("%i", &nume);
    int resultado = perf(nume);
    return 1;
}