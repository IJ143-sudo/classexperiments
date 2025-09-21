#include <stdio.h>

int main() 
{
    int num = 1;
    int rows = 3;

    for(int i = 1; i <= rows; i++) {
        // Print spaces for centering
        for(int s = 1; s <= rows - i; s++) 
        {
            printf(" ");
        }
        // Print numbers in the row
        for(int j = 1; j <= i; j++)
         {
            printf("%d", num);
            num++;
            if(j < i)
             {
                printf(" "); // space between numbers
                
            }
        }
        printf("\n");
    }

    return 0;
}