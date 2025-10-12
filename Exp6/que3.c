/*. Develop a recursive function FIBO (num) that accepts an integer argument. Write
a C program that invokes this function to generate the Fibonacci sequence up to
num. */

#include <stdio.h>

// Recursive function to calculate nth Fibonacci number
int FIBO(int num) {
    if (num == 0)
        return 0;       // base case
    else if (num == 1)
        return 1;       // base case
    else
        return FIBO(num - 1) + FIBO(num - 2);  // recursive call
}

int main() 
{
    int num;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci sequence up to %d terms:\n", num);

    for (int i = 0; i < num; i++) {
        printf("%d ", FIBO(i));
    }

    return 0;
}