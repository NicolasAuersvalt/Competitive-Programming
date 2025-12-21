#include <ctype.h>
#include <stdio.h>

#define TAM 100

int main() {
  char str[TAM];
  char novaStr[2 * TAM];
  int i, len, novaLen;

  scanf("%s", str);

  for (len = 0; str[len] != '\0'; len++) {
  }

  novaLen = 0;

  for (i = 0; i < len; i++) {
    str[i] = tolower(str[i]);

    if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' &&
        str[i] != 'u' && str[i] != 'y') {
      novaStr[novaLen++] = '.';
      novaStr[novaLen++] = str[i];
    }
  }

  novaStr[novaLen] = '\0';

  printf("%s\n", novaStr);

  return 0;
}
