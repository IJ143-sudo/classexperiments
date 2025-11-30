//Open a file, read its content line by line, and display each line on the console.
#include <stdio.h>

int main() 
{
    FILE *fp;               // File pointer
    char line[300];         // Array to store each line from the file

    // Open an existing file in read mode
    fp = fopen("file.txt", "r");

    // Check if the file opened successfully
    if (fp == NULL) 
    {
        printf("Could not open the file\n");
        return 1;   // Exit program with error
    }

    printf("Reading file content line by line\n");

    // Read each line from the file until End Of File (EOF)
    while (fgets(line, sizeof(line), fp) != NULL) 
        printf("%s", line);  // Display the line on the console
    
    // Close the file after finishing reading
    fclose(fp);
    printf("\nFile reading completed.\n");

    return 0;
}