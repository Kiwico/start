#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int x,z,y,i,o, somme;

  printf("%s", "entrer un premier chiffre");
  sanf("%d", &x);

    printf("%s", "entre un deuxieme nombre");
  scanf("%d", &z);

printf("%s", "entre un troisieme nombre");
  scanf("%d", &y);

printf("%s", "entre un quatrieme nombre");
  scanf("%d", &i);

printf("%s", "entre un cinquieme nombre");
  scanf("%d", &o);

  somme = x + z+ y +i +o;

  return EXIT_SUCCESS;
}
