/*Develop a C function ISPRIME (num) that accepts an integer argument and
returns 1 if the argument is prime,  0 otherwise. Write a C program that invokes
this function to generate prime numbers between the given ranges. */

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int ISPRIME(int num)
 {
    if (num <= 1)
        return 0; // Not prime

    for (int i = 2; i <= sqrt(num); i++) 
    {
        if (num % i == 0)
            return 0; // Not prime
    }

    return 1; // Prime
}

int main() 
{
    int start, end;

    printf("Enter range of function(Start and end): ");
    scanf("%d %d", &start, &end);
    
    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) 
    {
        if (ISPRIME(i))
            printf("%d ", i);
    }

   

    return 0;
}