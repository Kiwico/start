/* afficher 7 sans mettre 7 dans le fichier */


#include <stdio.h>
#include <stdlib.h>

int main (void) {
  char miniscule,majuscule;
  
  printf("%s", "entrer une minuscule: ");
  scanf("%c", &miniscule);

  majuscule=miniscule-32;
  printf("%s\n", " la majuscule est :");

 printf("%c\n", majuscule);


  return EXIT_SUCCESS;
}
