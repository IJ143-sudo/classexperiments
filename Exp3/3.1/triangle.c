/*1. WAP to take check if the triangle is valid or not. If the validity is established, do
check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of
the triangle as input from a user.*/

#include <stdio.h>

int main() 
{
    int a, b, c;

    printf("Enter sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check validity
    if ((a + b > c) && (a + c > b) && (b + c > a))
     {
    
        // Check for Equilateral
        if (a == b && b == c) 
        {
            printf("It is an Equilateral triangle\n");
        }
        // Check for Isosceles or Scalene
        else if (a == b || b == c || a == c) 
        {
            printf("It is an Isosceles triangle\n");
        } else {
            printf("It is a Scalene triangle\n");
        }

        // Check for Right Angle (first find largest side)
        int x = a, y = b, z = c;
        // Ensure z is largest
        if (x > z) { int temp = x; x = z; z = temp; }
        if (y > z) { int temp = y; y = z; z = temp; }

        if (z * z == x * x + y * y) 
        {
            printf("It is also a Right-angled triangle\n");
        }

    } else {
        printf("Triangle is not valid.\n");
    }

    return 0;
}