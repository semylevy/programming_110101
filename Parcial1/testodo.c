#include <stdio.h>
//#include "Calculadora.h"
#include "referencias.h"

int main()
{
    /*printf("La potencia de 5 a la 22 es %d\n", potencia(5.0, 22.0));
    printf("La suma de 3 y 5 es %f\n", suma(3, 5));
    printf("La raíz cuadrada de 20 es %d", raizCuadrada(20.0));*/
    
    
    int valor;
    int otro=5;
    printf("Valor:");
    scanf("%i", &valor);
    duplicaValor(valor);
    triplicaValor(valor);
    repite(valor, otro);
    printf("El valor final es: %i\n", valor);
    
    return 0;
    
    
}