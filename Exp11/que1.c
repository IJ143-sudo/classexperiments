//Write a program to apply bitwise OR, AND and NOT operators on bit level.
#include <stdio.h>

// Function to print the binary representation of a number using recursion
void printBinary(unsigned char n) 
{
    if (n > 1)
        printBinary(n / 2);       // Divide by 2 recursively
    printf("%d", n % 2);          // Print remainder (0 or 1)
}

int main()
 {
    unsigned char a, b;

    // Take input from the user
    printf("Enter first number: ");
    scanf("%hhu", &a);

    printf("Enter second number:  ");
    scanf("%hhu", &b);

    printf("\nBitwise Operations:\n");

    // Bitwise AND
    printf("%d AND %d = %d (binary: ", a, b, a & b);
    printBinary(a & b);
    printf(")\n");

    // Bitwise OR
    printf("%d OR %d = %d (binary: ", a, b, a | b);
    printBinary(a | b);
    printf(")\n");

    // Bitwise NOT on first number
    printf("NOT %d = %d (binary: ", a, ~a);
    printBinary(~a);
    printf(")\n");

    // Bitwise NOT on second number
    printf("NOT %d = %d (binary: ", b, ~b);
    printBinary(~b);
    printf(")\n");

    return 0;
}