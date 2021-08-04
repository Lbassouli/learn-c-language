#include <stdio.h>

int main () {

  // var declation
  int a;
  int b;

  // read input user
  scanf ("%d %d", &a, &b);

  // program
  int result;
  result = a + b;

  // output
  printf ("%d + %d = %d", a, b, result);

  return 0;
}
