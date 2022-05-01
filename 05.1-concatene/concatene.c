#include <stdio.h>
#include <string.h>

#define TAM 30

int main () {
  char str1[TAM], str2[TAM];

  puts("Digite:");
  scanf("%s", str1);

  while ((getchar()) != '\n');
  puts("Digite de novo:");
  scanf("%s", str2);

  strcat(str1, str2);

  puts(str1);
  
  return 0;
}