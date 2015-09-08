#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

typedef struct tipo_adyacentes{
  int indice;
  struct tipo_adyacentes *sgte;
}adyacentes;

typedef struct tipo_nodo{     /* se define un nodo generico para las dos tipos de busquedas*/
  char *nombreHospital;       /* etiqueta */
  adyacentes *primerVecino;
  int padre; /* indice del padre en el arreglo de nodos  */
}Hospital;

#define TAM 7

main(){
  Hospital lista[TAM];  /* se declara el vector de nodos Hospitales */
  
}
