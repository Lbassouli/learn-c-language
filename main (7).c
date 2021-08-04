/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    
    // var declaration
    int v_x;
    int v_y;
    scanf("%d %d", &v_x, &v_y);
    int u_a;
    int u_b;
    scanf("%d %d", &u_a, &u_b);
    
     // program
    int vector;
    vector = v_x + u_a;
    printf("%d + %d = %d \n", v_x, u_a, vector);
    int vectorm;
    vectorm = v_y + u_b;
    printf("%d + %d = %d \n", v_y, u_b, vectorm);
    // output
    printf("result is (%d,%d)", vector, vectorm);
 
    return 0;
}
