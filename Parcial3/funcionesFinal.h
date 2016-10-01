#ifndef FUNCIONES
#define FUNCIONES

void imprimeMatrizChar(char ** matriz, int renglones, int columnas);
void imprimeMatrizInt(int ** matriz, int renglones, int columnas);
int cuentaArregloInt(int * arreglo);
int cuentaArregloChar(char * arreglo);
char ** randMatrizChar(char **matriz, int renglones, int columnas);
int ** randMatrizInt(int **matriz, int renglones, int columnas, int min, int max);
void randArregloInt(int **arreglo, int size);
void randArregloChar(char **arreglo, int size);
void imprimeArregloInt(int **arreglo, int size);
bool esPrimo(int num);

void randMatrizArielVersionCorchetes(int***, int reglones, int columnas, int min, int max);
void randMatrizArielVersionAritmeticaApuntadores(int***, int reglones, int columnas, int min, int max);

#endif