/*1. Write a C program that uses functions to perform the following operations:
a. Reading a complex number.
b. Writing a complex number.
c. Addition and subtraction of two complex numbers */

#include <stdio.h>

// Structure to represent a complex number
struct Complex 
{
    int real;
    int imag;
};

// Function to read a complex number
struct Complex read()
 {
    struct Complex c;
    printf("Enter real part: ");
    scanf("%d", &c.real);
    printf("Enter imaginary part: ");
    scanf("%d", &c.imag);
    return c;
}

// Function to display a complex number
void write(struct Complex c)
 {
    printf("%d + %di\n", c.real, c.imag);
}

// Function to add two complex numbers
struct Complex add(struct Complex c1, struct Complex c2) 
{
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subtract(struct Complex c1, struct Complex c2) 
{
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main()
 {
    struct Complex num1, num2, sum, diff;

    printf("Enter first complex number:\n");
    num1 = read();

    printf("\nEnter second complex number:\n");
    num2 = read();

    // Perform addition and subtraction
    sum = add(num1, num2);
    diff = subtract(num1, num2);

    // Display results
    printf("\nFirst complex number: ");
    write(num1);

    printf("Second complex number: ");
    write(num2);

    printf("\nSum: ");
    write(sum);

    printf("Difference: ");
    write(diff);

    return 0;
}
