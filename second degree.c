/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main() {
    
    // var declaration
    float a;
    float b;
    float c;
    float x_1;
    float x_2;
    float delta;
    
    // read user input
    scanf("%f %f %f", &a, &b, &c);
    
    // program
    printf("ax² + bx +c = 0 \n");
    delta = (b * b)- (4 * a *c);
    if (delta == 0){
        x_1 = -b / (2 * a);
        printf("the only solution is x_0 = %.2f \n", x_1);
    }
    if (delta < 0){
      printf("the equation haven't got no solution \n");
    
    } else if (delta > 0){
        x_1 = (-b - sqrt(delta)) / (2 * a);
        x_2 = (-b + sqrt(delta)) / (2 * a);
        printf("solution is x_1 = %.2f and x_2 = %.2f \n", x_1, x_2);
    }
    return 0;
}
