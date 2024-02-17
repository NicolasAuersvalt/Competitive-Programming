#include <stdio.h>

int main() {

  int n = 0, p = 0, v = 0, t = 0, sure = 0, i;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d %d %d", &p, &v, &t);
    if ((p + v + t) >= 2) {
      sure++;
    }
  }
  printf("%d", sure);

  return 0;
}