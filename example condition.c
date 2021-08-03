/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // var declaration
    float userInput;
    
    // read the variable
    scanf("%f", &userInput);
    
    // program
    if(userInput > 5) {
        printf("%.2f is greater than 5", userInput);
    } else if (userInput < 5) {
        printf("%.2f is less than 5", userInput);
    } else {
        printf("%.2f is equal to 5", userInput);
    }
    
    

    return 0;
}
