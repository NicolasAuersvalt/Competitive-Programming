#include <stdio.h>
#define LEN 100

int main() {

  char play[LEN];

  int i, j, a0 = 0, b1 = 0;

  scanf("%s", play);

  for (i = 0; play[i] != '\0'; i++) {
    for (j = i; play[j] == '1'; j++) {
      b1++;
      a0 = 0;

      if ((a0 == 7) || (b1 == 7)) {
        printf("YES");
        return 0;
      }
    }
    for (j = i; play[j] == '0'; j++) {
      a0++;
      b1 = 0;

      if ((a0 == 7) || (b1 == 7)) {
        printf("YES");
        return 0;
      }
    }
    b1 = 0;
    a0 = 0;
  }
  
  printf("NO");

  return 0;
}