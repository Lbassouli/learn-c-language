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
    printf("%.2f / %.2f = %.2f", result, a, b);

    return 0;
}
