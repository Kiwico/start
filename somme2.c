/* programme d'addition avec 2 variables*/


#include <stdio.h>
#include <stdlib.h>

int main (void) {

  int x, somme;

  printf("%s\n", "Entrer un chiffre");
  scanf("%d", &x);

 printf("%s\n", "Entrer un deuxieme chiffre");
  scanf("%d", &x);

 printf("%s\n", "Entrer un troisieme chiffre");
  scanf("%d", &x);

 printf("%s\n", "Entrer un quatrieme chiffre");
  scanf("%d", &x);

 printf("%s\n", "Entrer un  cinquieme chiffre");
  scanf("%d", &x);

  printf("%s\n", " la somme est: ");

  somme = x + x + x + x + x;
  printf("%d\n", somme);

  return EXIT_SUCCESS;
}

 

 
