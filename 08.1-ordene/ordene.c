#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

// Versão com bubble
int main() {
  int v[TAM], min, max, nao0rdenado;
  srand(time(0));

  puts("\nQual o limite mínimo?");
  scanf("%d", &min);

  puts("\nQual o limite máximo?");
  scanf("%d", &max);

  for (int i = 0; i < TAM; i++) {
    v[i] = min + rand() % (max - min + 1);
  }

  do {
    nao0rdenado = 0;
    for(int i = 0; i < TAM -1; i++) {
      if(v[i] > v[i+1]) {
        v[i] = v[i] ^ v[i+1];
        v[i+1] = v[i] ^ v[i+1];
        v[i] = v[i] ^ v[i+1];
        nao0rdenado = 1;
      }
    }
  } while (nao0rdenado);

  puts("");

  for(int i = 0; i < TAM; i++) {
    printf("%d ", v[i]);
  } 
  
  return 0;
}