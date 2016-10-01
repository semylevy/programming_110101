#include <stdio.h>

int producto(int numero)
{
   
   int res = 1; 
   for(int i=numero;i>1;i/=10)
   {
       int var = numero%10;
       res = res*var;
       numero/=10;
   }
    
    return res;
}

int mayor(int numero)
{
    
    int res = 0; 
    for(int i=numero;i>1;i/=10)
    {
        int var = numero%10;
        if(var>res)
        {
            res=var;
        }
        numero/=10;
    }
    
    return res;
}

int main()
{
    printf("%i\n", producto(843));
    printf("%i\n", mayor(2378465));
}