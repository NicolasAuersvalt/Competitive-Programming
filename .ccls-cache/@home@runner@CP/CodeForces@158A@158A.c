#include <stdio.h>
#include <stdlib.h>

int main() {

  int *vet;
  int i, k = 0, n = 0, keep = 0;

  scanf("%d %d", &n, &k);

  vet = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++) {
    scanf("%d", &vet[i]);
  }

  // Keeps k-th position value

  for (i = 0; (vet[i] >= keep) && (vet[i] != 0) && (i < n); i++) {

    if (k >= 1)
      k--;
    if ((k == 0) && (keep == 0)) {
      keep = vet[i];
    }
  }
  
  printf("%d", i);
  
  free(vet);

  return 0;
}