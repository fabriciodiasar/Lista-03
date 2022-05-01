#include <stdio.h>
#include <string.h>

#define TAM 20

int main () {
  char str1[TAM], str2[TAM];

  puts("Digite a primeira string:");
  scanf("%s", str1);

  puts("Digite a segunda string:");
  scanf("%s", str2);

  if(strcmp(str1, str2) == 0) {
    puts("\nAs strings são iguais!\n");
  } else {
    puts("\nAs strings NÃO são iguais!\n");
  }

  return 0;
}