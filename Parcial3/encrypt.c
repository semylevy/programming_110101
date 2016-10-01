#include "encrypt.h"
#include <stdio.h>
#include <stdlib.h>

int * encrypt(char * mensaje, int pass)
{
    int * mensajeNum;
    int contador=0;
    
    for(int i=0; mensaje[i] != '\0'; ++i)
    {
        ++contador;
    }
    
    mensajeNum = new int[contador];
    
    for(int i=0; i<contador; ++i)
    {
        *(mensajeNum+i)=*(mensaje+i);
    }
    
    for(int i=0; i<contador; ++i)
    {
        *(mensajeNum+i)=(*(mensajeNum+i))+pass;
    }
    
    return mensajeNum;
}

int main()
{

    char * mensaje;
    mensaje = new char [5];
    int pass=10;
    
    *(mensaje)='a';
    *(mensaje+1)='b';
    *(mensaje+2)='c';
    *(mensaje+3)='d';
    *(mensaje+4)='e';
    
    (int)mensaje=encrypt(mensaje, pass);
    
    for(int i=0; i<5; ++i)
    {
        printf("%i ", *(mensaje+i));
    }
    
}