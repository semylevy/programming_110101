#include "estructuras.h"

void reservaArregloPersonas(Persona ** arreglo, int size)
{
    *arreglo = new Persona[size];
}

void asignaPersonas(Persona * arreglo, int size, int pos, Persona p)
{
    if(pos>size)
    {
        printf("MAL");
    }

    *(arreglo+pos)=p;
}



int main()
{
    Persona a;
    a.nombre="Salo";
    a.apaterno="HJKLKJHs";
    a.amaterno="hjkl";
    a.edad=10;
    
    int size=5;
    Persona * arreglo;
    reservaArregloPersonas(&arreglo, size);
    asignaPersonas(arreglo, size, 0, a);
    
    for(int i=0; i<5; i++)
        arreglo[i].printPersona();
    
    
    return 0;
}