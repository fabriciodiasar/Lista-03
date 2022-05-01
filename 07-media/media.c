#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAM 3
#define MAX 19

int main() {
  int v[TAM], soma_a = 0, multi_g = 1;
  float media_a, media_g;
  srand(time(0));

  for (int i = 0; i < TAM; i++) {
    v[i] = rand() % (MAX + 1);
  }

  for (int i = 0; i < TAM; i++) {
    soma_a = soma_a + v[i];
    multi_g = multi_g * v[i];
  }

  media_a = soma_a / (TAM);
  media_g = pow(multi_g, 1.0 / (TAM));

  printf("\nMedia aritmética = %.2f  ||  Média geométrica = %.2f.\n\n", media_a, media_g);
 
  return 0;
}