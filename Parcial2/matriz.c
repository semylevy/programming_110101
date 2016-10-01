#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprime(int *arreglo)
{
    for(int i=0; *(arreglo+i)!='\0'; ++i)
    {
        printf("%i ", *(arreglo+i));
    }
}

void calif(int **matriz, int renglones, int columnas, int ** reprobados, int ** aprobados)
{
    int contador1=0;
    int contador2=0;
    int * promedios;
    promedios=new int[renglones];
    *reprobados = new int[renglones];
    *aprobados = new int[renglones];
    int bajo=100;
    int alto=0;
    
    for(int i=0; i<renglones; ++i)
    {
        for(int y=0; y<columnas; ++y)
        {
            *(promedios+i)=*(promedios+i)+matriz[i][y];
        }
        *(promedios+i)=*(promedios+i)/columnas;
    }
    
    for (int i=0; i<renglones; ++i) 
    {
        for (int y=0; y<columnas ; ++y) 
        {
            if(matriz[i][y]>alto)
            {
                alto=matriz[i][y];
            }
            if(matriz[i][y]<bajo)
            {
                bajo=matriz[i][y];
            }
        }
    }
    
    for (int i=0; i<renglones; ++i)
    {
        if(*(promedios+i)<70)
        {
            *(*(reprobados)+contador1)=*(promedios+i);
            ++contador1;
        }
        else
        {
            *(*(aprobados)+contador2)=*(promedios+i);
            ++contador2;
        }
    }
    
    
    for(int i=0; i<renglones; ++i)
    {
        printf("Promedio %i: %i\n", i, *(promedios+i));
    }
    
    for (int i=0; i<renglones; ++i) 
    {
        for (int y=0; y<columnas ; ++y) 
        {
            if(matriz[i][y]==alto)
            {
                printf("Calificación %i de alumno %i es alta con: %i\n", y, i, alto);
            }
            if(matriz[i][y]==bajo)
            {
                printf("Calificación %i de alumno %i es baja con: %i\n", y, i, bajo);
            }
        }
    }
}

int main()
{
    int renglones=10;
    int columnas=4;
    int **matriz;
    int *reprobados;
    int *aprobados;
    
    matriz = new int * [renglones];
    for(int i=0; i<renglones; ++i)
    {
        matriz[i]=new int [columnas];
    }
    
    srand(time(NULL));
    for(int i=0; i<renglones; ++i)
    {
        for(int y=0; y<columnas; ++y)
        {
            matriz[i][y]=rand()%100;
            printf("Alumno %i Calif %i = %i ", i, y, matriz[i][y]);
        }
        printf("\n");
    }
    calif(matriz, renglones, columnas, &reprobados, &aprobados);
    printf("REPROBADOS\n");
    imprime(reprobados);
    printf("\nAPROBADOS\n");
    imprime(aprobados);
}