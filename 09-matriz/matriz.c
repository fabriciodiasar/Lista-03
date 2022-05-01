#include <stdio.h>

#define L 3
#define C 3

int main()  {
  int matriz[L][C];

  puts("\nDigite os valores:");
  for(int i = 0; i < L; i++) {
    for(int j = 0; j < C; j++) {
      printf("\nMatriz[%d][%d] = ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  for(int i = 0; i < L; i++) {
    printf("\nMatriz[%d][%d] = %d\n",i , i, matriz[i][i]);
  }

  return 0;
}