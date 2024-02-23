#include <stdio.h>
#include <stdlib.h>

int main() {

  int **mat, i, j, ref[2];

  mat = malloc(sizeof(int *) * 5);

  for (i = 0; i < 5; i++) {
    mat[i] = malloc(sizeof(int) * 5);
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      scanf("%d", &mat[i][j]);
    }
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (mat[i][j] == 1) {
        ref[0] = i - 2;
        ref[1] = j - 2;

        for (i = 0; i < 5; i++)
          free(mat[i]);
        free(mat);

        if (ref[0] < 0)
          ref[0] *= -1;
        if (ref[1] < 0)
          ref[1] *= -1;

        printf("%d", ref[0] + ref[1]);
        return 0;
      }
    }
  }
}