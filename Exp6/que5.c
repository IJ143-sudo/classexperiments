/*. Develop a function REVERSE (str) that accepts a string argument. Write a C
program that invokes this function to find the reverse of a given string*/

#include <stdio.h>

void REVERSE(char str[])
 {
    char rev[20];
    int i, len = 0, j;

    // find length manually
    while (str[len] != '\0') 
        len++;
    

    // store in reverse order
    for (i = len - 1, j = 0; i >= 0; i--, j++) {
        rev[j] = str[i];
    }
    rev[j] = '\0';  // null terminate

    printf("Reversed string: %s\n", rev);
}

int main() {
    char str[20];

    printf("Enter a string: ");
    gets(str);

    REVERSE(str);

    return 0;
}