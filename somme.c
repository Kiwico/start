#include <stdio.h>
#include <stdlib.h>

int main (void) {

  int x, y, t, d, k, somme;



  printf("%s\n", "entre un premier nb:");
  scanf("%d", &x);

printf("%s\n", "entre un deuxieme nb:");
  scanf("%d", &y);

printf("%s\n", "entre un troisieme nb:");
  scanf("%d", &t);

printf("%s\n", "entre un quatrieme nb:");
  scanf("%d", &d);

printf("%s\n", "entre un cinquieme nb:");
  scanf("%d", &k);

  somme = x + y + t + d + k; ;

  printf("%s\n", "la somme est :");


 printf("%d\n", somme);  

  return EXIT_SUCCESS;
}
