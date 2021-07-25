/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main () {

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

