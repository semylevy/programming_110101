#include "EjFinal.h"
#include <stdio.h>
#include "funcionesFinal.h"
#include <stdlib.h>
#include <time.h>

void Ej1(int ***matriz, int size)
{
    *matriz=new int * [size];
    for(int i=0; i<size; ++i)
    {
        *((*matriz)+i)=new int [size];
    }
    
    for(int i=0; i<size; ++i)
    {
        for(int y=0; y<size; ++y)
        {
            *(*((*matriz)+i)+y)=i+1;
            printf("%i ", *(*((*matriz)+i)+y));
        }
        printf("\n");
    }
}

void Ej2(int ***matriz, int size)
{
    *matriz=new int * [size];
    for(int i=0; i<size; ++i)
    {
        *((*matriz)+i)=new int [size];
    }
    
    for(int i=0; i<size; ++i)
    {
        for(int y=0; y<size; ++y)
        {
            *(*((*matriz)+i)+y)=y+1;
            printf("%i ", *(*((*matriz)+i)+y));
        }
        printf("\n");
    }
}

void Ej3(int ***matriz, int size)
{
    *matriz=new int * [size];
    int var=0;
    for(int i=0; i<size; ++i)
    {
        *((*matriz)+i)=new int [size];
    }
    
    for(int i=0; i<size; ++i)
    {
        var=i;
        for(int y=0; y<size; ++y)
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

void Ej4(int ***matriz, int p, int n)
{
    
    int **matriz2;
    matriz2 = new int * [n];
    for (int i=0; i<n; ++i)
    {
        *(matriz2+i) = new int [p];
    }
    for(int i=0; i<p; ++i)
    {
        for(int y=0; y<n; ++y)
        {
            matriz2[i][y]=*(*((*matriz)+y)+i); //No se como acceder a arreglo como apuntador
            printf("%i ", matriz2[i][y]);
        }
        printf("\n");
    }
    
    *matriz=matriz2;
    delete [] matriz2;
}

void Ej5(int ** arreglo, int size)
{
    for(int i=0; i<size; ++i)
    {
        *((*arreglo)+i)=*((*arreglo)+(size-i));
    }
}

int ** Ej6(int m, int n, int max, int min)
{
    srand(time(NULL));
    int ** matriz;
    matriz = new int* [m];
    for(int i=0; i<m; ++i)
    {
        *(matriz+i)=new int [n];
    }
    for(int i=0; i<m; ++i)
    {
        for(int y=0; y<n; ++y)
        {
            matriz[i][y]=rand()%(min-max)+min;
        }
    }
    return matriz;
}

int ** Ej7(int **matriz, int m, int n)
{
    int ** matrizNueva;
    matrizNueva = new int*[m];
    int max=0;
    int min=10000;
    int promedio;
    for(int i=0; i<m; ++i)
    {
        *(matrizNueva+i)= new int [4];
    }
    for(int i=0; i<m; ++i)
    {
        for(int y=0; y<n; ++y)
        {
            matrizNueva[i][0]=matrizNueva[i][0]+matriz[i][y];
            if(max<matriz[i][y])
            {
                max=matriz[i][y];
            }
            if(min>matriz[i][y])
            {
                min=matriz[i][y];
            }
            promedio=promedio+matriz[i][y];
        }
        promedio/=n;
        matrizNueva[i][1]=max;
        matrizNueva[i][2]=min;
        matrizNueva[i][3]=promedio;
        promedio=0;
        max=0;
        min=10000;
    }
    return matrizNueva;
}

int * combinaciones(int num)
{
  int * combinaciones;
  int size=0;
  int var=0;
  int * digitos;
  for(int i=num; i>0; i/=10)
  {
    ++size;
  }
  digitos=new int[size];
  combinaciones=new int[size];

  for(int i=num; i>0; i/=10)
  {
    digitos[var]=i%10;
    ++var;
  }
  for(int i=0; i<size; ++i)
  {
    for(int y=1; y<size; ++y)
    {
      digitos[i]*=10;
    }
  }

  for(int i=0; i<size; ++i)
  {
    combinaciones[i]=((num/10)+(digitos[i]));
    num=((num/10)+(digitos[i]));
  }
  return combinaciones;
}

int * Ej8(int **matriz, int size)
{
    int *arreglo=new int[size];
    int *arreglo2=new int[100];
    int var = 0;
    int pos=0;
    
    for(int i=0; i<size; ++i)
    {
        for(int y=0; y<size; ++y)
        {
            var=0;
            arreglo=combinaciones(matriz[i][y]);
            for(int x=0; x<size; ++x)
            {
                if(esPrimo(arreglo[x])==true)
                {
                    ++var;
                }
            }
            if(var==size)
            {
                arreglo2[pos]=matriz[i][y];
            }
        }
    }
    return arreglo2;
}

void encrypt()
{

  int size = 255;
  char * linea = new char [size];
  linea[size-1]='\0';
  int pass;
  int var=0;

  FILE * archivo;
  archivo = fopen("texto.txt", "a+");
  FILE * archivo2;
  archivo2 = fopen("encrypted.txt", "w+");

  printf("ESCRIBIR CONTRASEÑA\n");
  scanf("%i", &pass);

  if(archivo != NULL)
    {
        while(fgets(linea, size, archivo)!= NULL)
        {
            var=0;
            while(linea[var]!='\n')
            {
              linea[var]=(linea[var]+pass);
              ++var;
            }
            fprintf(archivo2, "%s", linea);
        }
    }



  //fclose(archivo);          //MARCA ERROR

  //fclose(archivo2);          //MARCA ERROR

}

void decrypt()
{
  int size = 255;
  char * linea = new char [size];
  linea[size-1]='\0';
  int pass;
  int var=0;

  FILE * archivo2;
  archivo2 = fopen("decrypted.txt", "w+");

  printf("MUESTRAS DE CONTRASEÑA:\n");

  for(int i=0; i<10; ++i)
  {
    FILE * archivo;
    archivo = fopen("encrypted.txt", "r");
    if(archivo != NULL)
    {
        printf("\n\tCONTRASEÑA - %i - \n\n", i);

        while(fgets(linea, size, archivo)!= NULL)
        {
          var=0;
          while(linea[var]!='\n')
          {
            printf("%c", (linea[var]-i));
            ++var;
          }
          printf("\n");
        }
      }
        //fclose(archivo);          //MARCA ERROR
    }

  printf("ELIGE CONTRASENA:");
  scanf("%i", &pass);
  FILE * archivo;
  archivo = fopen("encrypted.txt", "r");
  if(archivo != NULL)
    {
        while(fgets(linea, size, archivo)!= NULL)
        {
            var=0;
            while(linea[var]!='\n')
            {
              linea[var]=(linea[var]-pass);
              ++var;
            }
            fprintf(archivo2, "%s", linea);
        }
    }

  //fclose(archivo2);          //MARCA ERROR

}


int main()
{
    int ** matriz;
    int size=10;
    int * arreglo;
    int * arreglo2;
    int ** matriz2;
    int ** matriz3;
    int ** matriz4;
    int size2;
    
    randArregloInt(&arreglo, size);printf("\n");
    imprimeArregloInt(&arreglo, size);printf("\n");
    
    Ej1(&matriz, size);printf("\n");
    Ej2(&matriz, size);printf("\n");
    Ej3(&matriz, size);printf("\n");
    Ej4(&matriz, 8, 8);printf("\n");
    Ej5(&arreglo, size);printf("\n");
    matriz2=Ej6(10, 10, 100, 0);
    matriz3=randMatrizInt(matriz3, 10, 10, 100, 1000);
    matriz3=Ej7(matriz3, 10, 10);
    
    imprimeArregloInt(&arreglo, size);printf("\n");
    imprimeMatrizInt(matriz2, 10, 10);printf("\n");
    imprimeMatrizInt(matriz3, 10, 10);printf("\n");
    
    matriz3=Ej7(matriz3, 10, 10);printf("\n");
    imprimeMatrizInt(matriz3, 10, 4);printf("\n");
    
    matriz4=randMatrizInt(matriz4, 10, 10, 0, 1000);
    imprimeMatrizInt(matriz4, 10, 10);
    arreglo2=Ej8(matriz4, 10);
    size2=cuentaArregloInt(arreglo2);
    imprimeArregloInt(&arreglo2, size2);
    
    //encrypt();          //Parece que c9 tiene problemas al manejar archivos (lo hace al terminar de correr el programa)... Si se corre primero el encrypt y luego el decrypt (una vez por compilada) si funciona.
    //decrypt();          //También parecen haber problemas con la liberación de memoria (de FILEs), lo dejé como comentario, pero en teoría debería de funcionar.
    
    /*delete [] matriz;
    delete [] matriz2;
    delete [] matriz3;
    delete [] matriz4;
    delete [] arreglo;
    delete [] arreglo2;*/
    
}