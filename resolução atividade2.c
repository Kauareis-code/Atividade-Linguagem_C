#include <stdio.h>

#include <stdlib.h>



int main (void)

{

  int antecessor, sucessor, um_numero;

  printf ("Digite um numero: ");

  scanf ("%d", &um_numero);

  (void) getchar ();

  antecessor=um_numero-1;

  sucessor=um_numero+1;

  printf ("O valor do antecessor: %d\n", antecessor);

  printf ("O valor do sucessor: %d\n", sucessor);

   

}