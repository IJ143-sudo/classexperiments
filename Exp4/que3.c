//Declare a variable within different code blocks and test their accessibilty outside it

#include<stdio.h>

int add(int x,int y)
{return x+y;}     

int sub(int a, int b)
{return a-b;}



int main()
{
    int num1,num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1,&num2);
   
    //Block1: using user inputs
    {
        int result1=add(num1,num2);
        int result2=sub(num1,num2);
      
        printf("\naddition: %d", result1);
        printf("\nsubtraction: %d", result2);
    }        
        //try accessing result1 here, it will show varible undefined

        
     //Block2: using hardcoded values
     {
        int result1=add(3,4);
        int result2=sub(5,4);

         printf("\n\naddition: %d", result1);
        printf("\nsubtraction: %d", result2);

     }
    
      
     //Block3:using both together
     { 
        int result1=add(num1,4);
        int result2=sub(5,num2);

         printf("\n\naddition: %d", result1);
        printf("\nsubtraction: %d", result2);

     }

     return 0;
}

//Each block has its own local result1 and result2
//If I try accessing any of those variables outside the blocks it will show "variable undefined"