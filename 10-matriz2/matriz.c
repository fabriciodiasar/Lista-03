#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 3
#define C 3
#define MAX 100

int main()  {
  int matriz[L][C], x, vezes = 0;
  srand(time(0));

  for(int i = 0; i < L; i++) {
    for(int j = 0; j < C; j++) {
      matriz[i][j] = rand() % MAX;
    }
  }

  puts("\nDigite um número:");
  scanf("%d", &x);

  for(int i = 0; i < L; i++) {
    for(int j = 0; j < C; j++) {
      if (matriz[i][j] == x) vezes++;
    }
  }

  printf("\nO número %d aparece %d vezes na matriz.\n", x, vezes);

  return 0;
}