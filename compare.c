/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    // var declaration
    float a;
    float b;
    
    // read user input
    scanf("%f %f", &a, &b);
    
    // compare program
    if(a < b){
    printf("%.2f is less than %.2f", a, b);
    } else if(a > b){
    printf("%.2f is greater than %.2f", a, b);
    }else {
    printf("%.2f is equal to %.2f", a, b);
    }
    

   

    return 0;
}
