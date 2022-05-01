#include <stdio.h>
#include <stdlib.h>

#define TAM 15

int main() {
  float v[TAM], maior, menor;

  puts("\nDigite 15 números:");
  
  for (int i = 0; i < TAM; i++) {
    scanf("%f", &v[i]);
  }

  for (int i = 0; i < TAM; i++){
    if(i == 0 || v[0] == 0) {
      maior = menor = v[i];
    } else if (v[i] > maior) {
      maior = v[i];
    } else if (v[i] < menor) {
      menor = v[i];
    }
  }

  printf("\nmenor = %.2f, maior = %.2f\n\n", menor, maior);

  return 0;
}