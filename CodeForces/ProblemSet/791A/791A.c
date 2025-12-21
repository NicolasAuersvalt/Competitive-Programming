#include <stdio.h>

// Limak > Bob

//  Limak = a
//  Bob = b

// Limak <= bob

// Limark  = 3 * a * year

// Bob = 2 * b * year

int main() {

  int year=1, a = 0, b = 0;

  scanf("%d %d", &a, &b);

  for(year = 0; a<=b; year++){
    a *= 3;
    b *= 2;
  }

  printf("%d", year);
  

  return 0;
}