#include <stdio.h>
#include <string.h>

#define TAM 20

void inverter (char str[]) {
  int i = 0;
  int j = strlen(str);
  char copia[TAM];

  while (j >= 0) {
    copia[i] = str[j - 1];
    i++;
    j--;
  }

  strcpy(str, copia);
}

int main() {
  char str[TAM];

  puts("\nDigite a string:");
  scanf("%s", str);

  inverter(str);

  puts(str);
  
  return 0;
}