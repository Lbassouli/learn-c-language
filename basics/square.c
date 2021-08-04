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
