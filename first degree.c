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
    
    // read user input
    scanf("%f %f", &a, &b);
    
    // program
    printf("equation is : a * x = b \n");
    if (a != 0 && b != 0){
        int x;
        x = b / a;
        printf ("%.2f * x = %.2f \n", a, b);
        printf("the solution is x = %d", x);
    }
    if (a == 0 && b == 0){
        printf("the solution is indertminated");
    
    } else if (a == 0 && b != 0){
        printf("the equation is imposible");
    }
    
    return 0;
}
