/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    
    // var declation
    float a;
    float b;
    
    // read user input
    scanf("%f %f", &a, &b);
    
    // compute result
    float result;
    result = a / b;
    
    // output result
    printf("quotient = a / b = %.2f", result);

    return 0;
}
