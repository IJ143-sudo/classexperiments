/*Declare different types of pointers (int, float, char) and initialize them with the
addresses of variables. Print the values of both the pointers and the variables they
point to.*/

#include<stdio.h>
int main()
{
    int age;
    char ch;
    float num;

    int *ptr1=&age;
    char *ptr2=&ch;
    float *ptr3=&num;
  
    //input age
    printf("Enter Age: ");
    scanf("%d",&age);
      //input character
    printf("Enter character: ");
    scanf(" %c",&ch);
    //input a float number
    printf("Enter a decimal number: ");
    scanf("%f",&num);
     
    //Print values of variable and the pointers
    printf("\nAge: %d\n",age);
    printf("Age: %d\n",*ptr1);

    printf("\nCharacter: %c\n",ch);
    printf("Character: %c\n",*ptr2);

    printf("\nNum: %.2f\n",num);
    printf("Num: %.2f\n",*ptr3);

    return 0;

    
}