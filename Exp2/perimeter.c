/*WAP a C program to calculate the area and perimeter of a rectangle based on its
length and width*/

#include <stdio.h>

int main()
 {
    float L, W, area, perimeter;

    // Input length
    printf("Enter the length of the rectangle: ");
    scanf("%f", &L);

    //Input Width
    printf("Enter the width of the rectangle: ");
    scanf("%f", &W);

    // Calculate area and perimeter
    area = L * W;
    perimeter = 2 * (L + W);

    // Display results
    printf("Area of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);

    return 0;
}