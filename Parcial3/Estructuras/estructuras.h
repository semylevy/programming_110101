#ifndef ESTR
#define ESTR

#include <stdio.h>
#include <string>

using namespace std;

struct Persona
{
    string nombre;
    string apaterno;
    string amaterno;
    int edad;
    void printPersona()
    {
        printf("Nombre: %s\n", nombre.c_str());
        printf("Apellido paterno: %s\n", apaterno.c_str());
        printf("Apellido materno: %s\n", amaterno.c_str());
        printf("Edad: %i\n", edad);
    }
};

void reservaArregloPersonas(Persona ** arreglo, int size);
void asignaPersonas(Persona * arreglo, int size, int pos, Persona p);

#endif