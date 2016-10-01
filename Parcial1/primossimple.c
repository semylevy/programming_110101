#include <stdio.h>

int primo(int num)
{
    int per;
    for(int contador=num-1;contador>1;contador=contador-1)
    {
        if(num%contador == 0)
        {
            per=per+1;
        }

    }
    
    if(per==0)
    {
        printf("El número %i es primo.", num);
    }
    else
    {
        printf("El número %i no es primo.", num);
    }
    
}

int main()
{
    int res=primo(123456789);
}