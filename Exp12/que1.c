//Write a program to define some constant variable in preprocessor.
#include <stdio.h>

#define DISCOUNT 10   // Define a constant discount value

int main() 
{
    int price = 100;
    int finalPrice;

    // Using the constant later in program
    finalPrice = price - DISCOUNT;

    printf("Original Price: %d\n", price);
    printf("Discount: %d\n", DISCOUNT);
    printf("Final Price After Discount: %d\n", finalPrice);

    return 0;
}