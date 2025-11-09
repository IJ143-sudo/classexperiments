/*. Create a Book structure containing book_id, title, author name and price. Write a
C program to pass a structure as a function argument and print the book details. */

#include <stdio.h>

// Structure to store book details
struct Book 
{
    int book_id;
    char title[50];
    char author[50];
    float price;
};

// Function to print book details (structure passed as argument)
void printBook(struct Book b) 
{
    printf("\nBook ID     : %d\n", b.book_id);
    printf("Title       : %s\n", b.title);
    printf("Author Name : %s\n", b.author);
    printf("Price       : %.2f\n", b.price);
}

int main()
 {
    struct Book b1;

    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &b1.book_id);
    getchar();  // Clear newline after scanf

    printf("Enter Book Title: ");
    gets(b1.title);  

    printf("Enter Author Name: ");
    gets(b1.author); 
    printf("Enter Price: ");
    scanf("%f", &b1.price);

    // Pass structure to function to print details
    printBook(b1);

    return 0;
}