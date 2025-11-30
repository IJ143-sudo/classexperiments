// Write a program to define a function in directives


#include <stdio.h>

// function like Macro to find maximum of two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() 
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Using the macro function to find maximum
    printf("Maximum of %d and %d is %d\n", num1, num2, MAX(num1, num2));

    return 0;
}
