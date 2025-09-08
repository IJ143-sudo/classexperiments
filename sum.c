#include <stdio.h>
int main()
{
    int num1,num2;  //declare variable to store numbers
    printf("Enter first number: "); 
    scanf("%d",&num1);   //read num and store in num1

    printf("Enter second number: ");
    scanf("%d",&num2); //read num and store in num2

   int sum=num1+num2;    //declare sum
    printf("sum is: %d", sum); 

    return 0;

}