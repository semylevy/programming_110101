#include <stdio.h>

int asteri(int num)
{
    for(int i=1; i<=num; i=i+1)
    {
        int contador=1;
        while(contador<i)
        {
            printf("*");
            contador=contador+1;
        }
        printf("\n");
    }
    
    for(int i=num; i>0; i=i-1)
    {
        int contador=i;
        while(contador>0)
        {
            printf("*");
            contador=contador-1;
        }
        printf("\n");
    }
}

int main()
{
    int res=asteri(30);
}