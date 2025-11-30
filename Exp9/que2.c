/*Open an existing file and read its content character by character, and then close
the file*/
#include <stdio.h>

int main() 
{
    FILE *fp;       // File pointer to access the file
    char ch;        // Variable to store each character while reading

    // Open an existing file in read mode
    fp = fopen("file.txt", "r");

    // Check if the file failed to open 
    if (fp == NULL) 
    {
        printf("Could not open the file. Make sure it exists!\n");
        return 1;  // Exit with an error
    }

    printf("Reading file content:\n\n");

    // Read the file character by character until End Of File (EOF)
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);   // Print each character to the screen

    // Close the file after finishing reading
    fclose(fp);
    printf("\nFile reading completed.\n");

    return 0;
}