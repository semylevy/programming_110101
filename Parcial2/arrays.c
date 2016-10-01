#include "arrays.h"
#include <string>
#include <stdio.h>


void imprimeNprim(int a[], int n, int &size)
{
   
   if(n>size)
   {
       printf("NO SIRVE");
   }
   
   else
    {
        for(int i=0; i<n; ++i)
        {
            printf("%i", a[i]);
            printf(" ");
        }
    }
    
}

void imprimeNultim(int a[], int n, int &size)
{
    
    if(n>size)
    {
        printf("NOOO!");
    }
    else
    {
        for(int i=(size-n); i<size; ++i)
        {
            
            printf("%i", a[i]);
            printf(" ");
    
        }
    }
}

int imprimeMayor(int a[], int &size)
{
    int mayor=0;
    
    for(int i=0; i<size; ++i)
    {
        if(a[i]>mayor)
        {
            mayor=a[i];
        }
    }
    return mayor;
}

int imprimeMenor(int a[], int &size)
{
    int menor=a[0];
    
    for(int i=0; i<size; ++i)
    {
        if(a[i]<menor)
        {
            menor=a[i];
        }
    }
    return menor;
}