/* WAP to enter numbers till the user wants. At the end, it should display the count
of positive, negative, and Zeroes entered.*/

#include <stdio.h>

int main() 
{
    int num;
    char choice;
    int count0=0;
    int countp=0;
    int countn=0;

    do 
    {
        // ask user for number
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num==0)
        
           count0++;
          
          else if(num>0)
        
           countp++;

          else
           countn++;
        
        // ask if they want to continue
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' );

     printf("zeroes: %d", count0);
     printf("\nPOsitives: %d", countp);
     printf("\nNegatives: %d", countn);

    return 0;
}
