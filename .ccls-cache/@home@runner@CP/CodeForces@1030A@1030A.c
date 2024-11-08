#include <stdio.h>
#include <stdlib.h>

int main() {

  int *vet, n = 0, i;

  scanf("%d", &n);
  vet = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++) {
    scanf("%d", &vet[i]);
    if (vet[i] == 1) {
      printf("Hard");
      free(vet);
      return 0;
    }
  }
  printf("Easy");
  free(vet);
  return 0;
}