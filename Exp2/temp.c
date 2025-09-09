/*WAP a C program to Convert temperature from Celsius to Fahrenheit using the
formula: F = (C * 9/5) + 32.*/

#include <stdio.h>

int main()
 {
    float c, f;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    // Convert Celsius to Fahrenheit
    f = (c * 9 / 5) + 32;

    // Display result
    printf("Temperature in Fahrenheit: %.2f\n", f);

    return 0;
}
