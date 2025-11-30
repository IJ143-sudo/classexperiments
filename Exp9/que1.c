//Write a program to create a new file and write text into it

#include <stdio.h>

int main()
 {
    FILE *fp;        // File pointer to handle the file
    char text[100];  // Array to store the text the user will enter

    // Try to open (or create) a file named "output.txt" in write mode.
    // "w" mode creates the file if it doesn't exist and clears it if it already exists.
    fp = fopen("file.txt", "w");

    // Check if file failed to open
    if (fp == NULL)
     {
        printf(" Could not create the file.\n");
        return 1;  // Exit program with an error code
    }

    printf("Enter some text to save into the file:\n");
    fgets(text, sizeof(text), stdin);  // Read a full line 

    // Write the text into the file
    fputs(text, fp);
    fclose(fp); //close the file

    printf("Your text was written to file \n");

    return 0;
}
