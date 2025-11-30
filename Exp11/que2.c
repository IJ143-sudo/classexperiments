//Write a program to apply left shift and right shift operator

#include <stdio.h>

int main() 
{
    int num, leftShf, rightShf, value;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter how many positions to shift: ");
    scanf("%d", &value);

    // Left shift
    leftShf = num<<value;

    // Right shift
    rightShf= num>>value;

    printf("\nResult\n");
    printf("Original Number : %d\n", num);
    printf("Left Shift %d<<%d  = %d\n", num, value,leftShf);
    printf("Right Shift %d>>%d = %d\n", num, value,rightShf);

    return 0;
}