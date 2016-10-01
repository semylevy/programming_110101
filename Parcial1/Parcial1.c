#include <stdio.h>

int primo(int num)
{
    int per;
    for(int contador=num-1;contador>1;--contador)
    {
        if(num%contador == 0)
        {
            per=per+1;
        }

    }
    
    int re=0;
    if(per==0)
    {
        re=1;
    }
    else
    {
        re=2;
    }
    return re;
}

int pares(int num)
{
    int res=0;
    for(int i=num; i>2; --i)
    {
        if(i%2 == 0)
        {
            res=res+i;
        }
    }
    printf("La suma de los pares es %i\n", res);
}

int primos()
{
    int contador=0;
        for(int i=1000;i>3;--i)
        {
            printf("\n");
            int resultado=primo(i);
            if(resultado==1)
            {
                contador=contador+1;
            }
        }
        printf("El número de primos es %i\n", contador);
}

int coches(int marca, int frenos, int potencia, int color)
{
    /*Chrysler = 1
    Honda = 2
    Tambor = 10
    Disco= 20
    Alta = 100
    Media = 200
    Rojo = 1000
    Azul = 2000
    Rosa = 3000*/
    
    if (marca+frenos+potencia+color==1111)
    {
        printf("El coche es regular");
    }
    if (marca+frenos+potencia+color==1221)
    {
        printf("El coche es bueno");
    }
    if (marca+frenos+potencia+color==2112)
    {
        printf("El coche es bueno");
    }
    if (marca+frenos+potencia+color==3211)
    {
        printf("El coche es regular");
    }
    if (marca+frenos+potencia+color==3212)
    {
        printf("El coche es bueno");
    }
    if (marca+frenos+potencia+color==2122)
    {
        printf("El coche es bueno");
    }
    if (marca+frenos+potencia+color==2121)
    {
        printf("El coche es regular");
    }
    if (marca+frenos+potencia+color==1222)
    {
        printf("El coche es bueno");
    }
}

int asteri(int num)
{
    int cont=num;
    for(int i=1; i<num; i=i+1)
    {
        while(cont>0)
        {
            printf("*");
            cont=cont-1;
        }
        printf("\n");
    }
}

int main()
{
    
    int resultado2=primos();
    int resultado=pares(6);
    int resultado3=coches(2, 20, 100, 2000);
    int resultado4=asteri(3);
}