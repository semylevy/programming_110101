#include "Calculadora.h"
#include <math.h>

float suma(float a, float b)
{
    return a+b;
}

double raizCuadrada(double numero)
{
    return sqrt(numero);
}

double potencia(double numero, double exponente)
{
    return pow(numero, exponente);
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
