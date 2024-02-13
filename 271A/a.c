#include <stdio.h>

int main() {

  int year = 0, thous, hun, ten, unit, min, ha = 1, i = 1;

  scanf("%d", &year);

  while (ha) {
    min = year + i;
    thous = min / 1000;
    hun = (min / 100) % 10;
    ten = (min % 100) / 10;
    unit = min % 10;

    if ((thous == hun) || (hun == ten) || (ten == unit) || (thous == ten) ||
        (thous == unit) || (hun == unit)) {
      i++;
    } else {
      ha = 0;
    }
  }

  printf("%d", min);

  return 0;
}