#include <stdio.h>

int primo(int num)
{
    int per=0;
    int contador=num-1;
    int divisores[1+num];
    int extra=0;
    
    while(contador>1)
    {
        if(num%contador == 0)
        {
            extra=extra+1;
            divisores[extra]=contador;
            per=per+1;
        }

        contador=contador-1;
    }
    
    if(per==0)
    {
        printf("El número %i es primo.", num);
    }
    else
    {
        printf("El número %i no es primo, ya que es divisible entre: ", num);
        if(extra==1)
        {
            while(extra==1)
            {
                printf("%i ", divisores[extra]);
                extra=extra-1;
            }
        }
        else
        {

            while(extra>1)
            {
                printf("%i ", divisores[extra]);
                extra=extra-1;
            }

            while(extra>0)
            {
                printf("y %i. ", divisores[extra]);
                extra=extra-1;
            }
        }
    }
    
}

int main()
{
    int res=primo(200);

}