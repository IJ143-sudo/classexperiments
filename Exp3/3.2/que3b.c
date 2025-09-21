       #include <stdio.h>

int main()
 {
    int rows = 5;

    for (int i = 1; i <= rows; i++) 
    {
        // Print spaces for centering
        for (int s = 1; s <= rows - i; s++) 
            printf(" ");

        int num = 1; // First number in each row
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", num);
            // Compute next number in the row
            num = num * (i - j) / j;
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
