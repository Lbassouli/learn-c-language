/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    // var declaration
    int a;
    
    // read user input
    scanf("%d", &a);
    
    // parity program
    
    if(a % 2 == 0){
    printf("%d is an even", a);
    }else {
    printf("%d is an odd", a);
    }

    return 0;
}
