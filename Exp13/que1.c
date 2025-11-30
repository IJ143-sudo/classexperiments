//Write a program to define multiple macro to perform arithmetic functions

#include <stdio.h>

// Macros for basic arithmetic operations
#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define DIV(a, b) ((b) != 0 ? (a) / (b) : 0)  // Avoid division by zero

int main() 
{
    double num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform arithmetic operations using macros
    printf("\nResults:\n");
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, ADD(num1, num2));
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, SUB(num1, num2));
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, MUL(num1, num2));

    if (num2 != 0)
        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, DIV(num1, num2));
    else
        printf("Division by zero is not allowed!\n");

    return 0;
}