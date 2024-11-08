#include <stdio.h>
#define MAX 102

int main() {

  char word[MAX], las, ini;
  int i, rep=0, j=0;

  scanf("%d", &rep);

  for(j=0; j<=rep; j++){
  
  fgets(word, MAX, stdin);

  for (i = 0; word[i+1] != '\0'; i++) {
  }

  if (i <= 10) {
    printf("%s", word);

  } else {

    ini = word[0];
    las = word[i-1];
    printf("%c%d%c\n", ini, i-2, las);
  }
}

  return 0;
}