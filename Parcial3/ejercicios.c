#include <stdio.h>

int ej1()
{
    int var=0;
    for(int i=999; i>0; --i)
    {
        if(i%5==0 || i%3==0)
        {
            var=var+i;
        }
    }
    
    return var;
}

int main()
{
    printf("%i", ej1());
}