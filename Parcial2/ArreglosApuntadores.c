#include "ArreglosApuntadores.h"
#include <stdio.h>

void imprime(int *arr, int size)
{
    for (int i=0;i<size;++i)
    {
        printf("%i ", arr[i]);
    }

}

int cuenta(int *arr, int size, int n)
{
    int contador=0;
    for (int i=0;i<size;++i)
    {
        if (arr[i]==n)
        {
            ++contador;
        }
    }
    
    return contador;
}

int * invierte(int *arr, int size)
{
    int * arr2;
    arr2 = new int [size];
    int size2=size-1;
    
    for(int i=0; i<size; ++i)
    {
        arr2[i]=arr[size2];
        --size2;
    }
    return arr2;
}

int * elimina(int *arr, int size, int n)
{
    int* arr2;
    arr2 = new int [size];
    int contador=0;
    for(int i=0; i<size; ++i)
    {
        if (arr[i]!=n)
        {
            arr2[contador]=arr[i];
            ++contador;
        }
    }
    if(contador==size)
    {
        printf("No hay %i en el arreglo", n);
    }
    return arr2;
}

int main()
{
    int *arreglo;
    int size = 5;
    int repite = 5;
    int n = 2;
    arreglo = new int [size];
    for(int i=0; i<size; ++i)
    {
        printf("Valor:");
        scanf("%i ", &arreglo[i]);
    }
    
    imprime(arreglo, size);
    printf("\nEl %i se repite %i veces\n", repite, cuenta(arreglo, size, repite));
    
    arreglo=invierte(arreglo, size);
    
    for(int i=0; i<size; ++i)
    {
        printf("%i ", arreglo[i]);
    }
    
    arreglo=elimina(arreglo, size, n);
    
    printf("\n");
    
    for(int i=0; arreglo[i] != '\0'; ++i)
    {
        printf("%i ", arreglo[i]);
    }
    
    return 1;
}