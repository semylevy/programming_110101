#include <stdio.h>

int bisiesto(short int anio)
{

    
    if(anio%4 == 0)
    
    {
        if(anio%100 == 0)
        {
            if(anio%400 == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 1;
        }
    }
    
    else
    
    {
        return 0;
    }
    
    
}

int salario(int horas)
{
    int paga;
    
    if(horas<=50)
    {
        paga=horas*280;
        return paga;
    }
        else
        {
            paga=((horas-50)*350)+14000;
            return paga;
        }
}

void repeticiones(int numRep)
{
    int contador = 0;
    while(contador < numRep)
    {
        contador = contador + 1;
        printf("hola ");
    }
    printf("\n");
}

int elevar(int num, int potencia)
{
    int contador=0;
    int resultado=1;
    while(contador<potencia)
    {
        resultado=resultado*num;
        contador=contador+1;
    }
    return resultado;
}

int factorial(int numero)
{
    int resultado=1;
    while(numero>0)
    {
        resultado=resultado*numero;
        numero=numero-1;
    }
    return resultado;
}

int main()
{
    int horas = 13000;
    int tmp = salario(horas);
    repeticiones(30);
    printf("El salario es %i \n", tmp);
    
    int num = 2;
    int ele = 2;
    printf("La potencia de %i a la %i es %i \n", num, ele, elevar(num, ele));
    
    printf("El numero es %i \n", factorial(10));
    
    if (bisiesto(1537)==1)
    {
        printf("Si es bisiesto");
    }
        else
        {
            printf("No es bisiesto");
        }

return 1;
}