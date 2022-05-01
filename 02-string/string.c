#include <stdio.h>
#include <stdlib.h>

#define TAM 20

int procura (char str[], int ch) {
  for(int i = 0; i < TAM; i++) {
    if (str[i] == ch) {
      return 1;
      break;
    } 
  }

  return 0;
}

int main () {
  char str[TAM];
  int ch;

  puts("Digite uma palavra:");
  scanf("%s", str);

  puts("Digite uma letra:");
  while ((getchar()) != '\n');
  ch = getchar();

  if(procura(str, ch) == 1) {
    printf("\nA letra '%c' está presente na palavra '%s'.\n\n", ch, str);
  } else {
    printf("\nA letra '%c' NÃO está presente na palavra '%s'.\n\n", ch, str);
  }
  
  return 0;
}