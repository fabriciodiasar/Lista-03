#include <stdio.h>
#include <string.h>

#define TAM 20

int main() {
  char str[TAM];
  int qtd = 0;

  puts("Digite a string:");
  scanf("%s", str);

  for(int i = 0; i < TAM; i++) {
    if (str[i] != '\0') qtd++;
      else break;
  }

  printf("\nA string possui %d caracteres.\n\n", qtd);

  return 0;
}