#include <stdio.h>
#include <string.h>

#define TAM 30

int comparacao (char str1[], char str2[]) {
  int i = 0;
  
  while (str1[i] != '\0'){
    if (str1[i] != str2[i]) {
      return 1;
      break;
    }
    
    i++;
  }

  return 0;
}

int main () {
  char str1[TAM], str2[TAM];

  puts("Digite a primeira string:");
  scanf("%s", str1);

  puts("Digite a segunda string:");
  scanf("%s", str2);

  if(comparacao(str1, str2) == 0) {
    puts("\nAs strings são iguais!\n\n");
  } else {
    puts("\nAs strings NÃO são iguais!\n\n");
  }

  return 0;
}