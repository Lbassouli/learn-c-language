/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    
    // var declation
    float a;
    
    // read user input
    scanf("%f", &a);
    
    // compute result
    float result;
    result = a * a;
    
    // output result
    printf("%.2f^2 = %.2f ", a, result);

    return 0;
}
