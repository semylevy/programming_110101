#include <stdio.h>

void Ej1(int num, int *** matriz)
{
    *matriz=new int * [num];
    for(int i=0; i<num; ++i)
    {
        *((*matriz)+i)=new int [num];
    }
    
    for(int i=0; i<num; ++i)
    {
        for(int y=0; y<num; ++y)
        {
            *(*((*matriz)+i)+y)=i+1;
            printf("%i ", *(*((*matriz)+i)+y));
        }
        printf("\n");
    }
    
}

void Ej2(int num, int *** matriz)
{
    *matriz=new int * [num];
    for(int i=0; i<num; ++i)
    {
        *((*matriz)+i)=new int [num];
    }
    
    for(int i=0; i<num; ++i)
    {
        for(int y=0; y<num; ++y)
        {
            *(*((*matriz)+i)+y)=y+1;
            printf("%i ", *(*((*matriz)+i)+y));
        }
        printf("\n");
    }
    
}

void Ej3(int num, int *** matriz)
{
    int var=0;
    *matriz=new int * [num];
    for(int i=0; i<num; ++i)
    {
        *((*matriz)+i)=new int [num];
    }
    
    for(int i=0; i<num; ++i)
    {
        var=i;
        for(int y=0; y<num; ++y)
        {
            if(var>0)
            {
                *(*((*matriz)+i)+y)=0;
            }
            else
            {
                *(*((*matriz)+i)+y)=1;
            }
            --var;
            printf("%i ", *(*((*matriz)+i)+y));
        }
        printf("\n");
    }
}

void Ej4(int p, int n, int ***matriz)
{
    int **matriz2;
    matriz2=new int * [p];
    for(int i=0; i<p; ++i)
    {
        *(matriz2+i)=new int [n];
    }
    
    for(int i=0; i<p; ++i)
    {
        for(int y=0; y<n; ++y)
        {
            matriz2[i][y]=*(*((*matriz)+y)+i);
            printf("%i ", matriz2[i][y]);
        }
        printf("\n");
    }
    *matriz=matriz2;
}

void Ej5(int size, int** arreglo)
{
    int *arreglo2;
    arreglo2=new int[size];
    
    for(int i=0; i<size; ++i)
    {
        *(arreglo2+i)=*((*arreglo)+(size-i));
        printf("%i\n", *(arreglo2+i));
    }
    
    *arreglo=arreglo2;
}

int main()
{
    int ** matriz;
    int *arreglo;
    
    arreglo=new int[10];
    for(int i=0; i<10; ++i)
    {
        *(arreglo+i)=i;
    }
    
    Ej1(10, &matriz);
    Ej2(10, &matriz);
    Ej3(10, &matriz);
    Ej4(10, 10, &matriz);
    Ej5(10, &arreglo);
    
    return 1;
}
