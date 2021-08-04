#include <stdio.h>

int main() {
    
    // var declaration
    // vector 1
    int v_x;
    int v_y;
    
    // vector 2
    int u_a;
    int u_b;
    
    // read user inputs
    scanf("%d %d", &v_x, &v_y);
    scanf("%d %d", &u_a, &u_b);
    
    // sum of two vectors
    int w_x;
    int w_y;
    
    w_x = v_x + u_a;
    w_y = v_y + u_b;
    
    // output
    printf("(%d, %d) + (%d, %d) = (%d, %d)", u_a, u_b, v_x, v_y, w_x, w_y);
 
    return 0;
}