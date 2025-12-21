#include <stdio.h>
#define MAX 100

int main() {

  char vet[MAX], apoio, ant=' ', atu=' ';

  int i = 0, j, found = 1;

  scanf("%s", vet);

  for(j=0; found==1; j++) {
    found = 0;
    for (i = 2; vet[i] != '\0'; i += 2) {
      ant = vet[i - 2];
      atu = vet[i];
      // AQUI

      if (ant>atu) {
        apoio = vet[i];
        vet[i] = vet[i - 2];
        vet[i - 2] = apoio;
        found = 1;
      }
    }
  }

  printf("%s", vet);

  return 0;
}