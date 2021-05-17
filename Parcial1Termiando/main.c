#include <stdio.h>
#include <stdlib.h>

#define TAM 10

typedef struct{
int id;
char nombre[20];
int infectados;
int recuperados;
int muertos;
}ePais;


void actualizarRecuperados(ePais unPais, int recupHoy);

void invertirCadena(char aOrdenar[],int  tam);

int main()
{
  ePais argentina;
  argentina.recuperados = 200;
  actualizarRecuperados(argentina, 25);

  char nombre[TAM]= "franco";

  invertirCadena(nombre, TAM);





}



void actualizarRecuperados(ePais unPais, int recupHoy)
{

unPais.recuperados = unPais.recuperados + recupHoy;

}



void invertirCadena(char aOrdenar[], int tam){

for(int i =tam; i >= 0 ; i --){

    printf("%c", aOrdenar[i]);

}
}
