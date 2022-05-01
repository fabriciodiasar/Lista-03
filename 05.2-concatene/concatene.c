#include <stdio.h>
#include <string.h>

#define TAM 30

void string(char str1[], char str2[], int i) {
  int j = 0;
  
  while(str2[j] != '\0') {
    str1[i] = str2[j];
    i++;
    j++;
  }
}

int main () {
  char str1[TAM], str2[TAM];

  puts("Digite a primeira string:");
  scanf("%s", str1);

  puts("Digite a segunda string:");
  scanf("%s", str2);

  string(str1, str2, strlen(str1));

  puts(str1);
  
  return 0;
}