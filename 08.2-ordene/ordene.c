#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

// Versão usando seleção
int main() {
  int v[TAM], min, max;
  srand(time(0));

  puts("\nQual o limite mínimo?");
  scanf("%d", &min);

  puts("\nQual o limite máximo?");
  scanf("%d", &max);

  for (int i = 0; i < TAM; i++) {
    v[i] = min + rand() % (max - min + 1);
  }

  for (int i = 0; i < TAM -1; i++)
    for(int j = i + 1; j < TAM; j++)
      if(v[i] > v[j]) {
        v[i] = v[i] ^ v[j];
        v[j] = v[i] ^ v[j];
        v[i] = v[i] ^ v[j];
      }

  puts("");
      
  for(int i = 0; i < TAM; i++) {
    printf("%d ", v[i]);
  } 
  
  return 0;
}