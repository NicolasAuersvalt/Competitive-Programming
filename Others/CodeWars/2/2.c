#include <stdbool.h>

bool collinearity(int x1, int y1, int x2, int y2) {

  // zeros

  if (x1 == 0 && x2 == 0 && y2 == 0 && y1 == 0) {
    return true;
  }

  if (x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0) {
    double m = (double)x1 / x2;
    double n = (double)y1 / y2;
    if (m == n) {
      return true;
    } else {
      return false;
    }
  }

  if (y1 == 0 && y2 == 0)
    return true;

  if (x1 == 0 && x2 == 0)
    return true;

  else
    return false;
}