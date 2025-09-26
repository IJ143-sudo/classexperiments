//WAP to declare a global variable outside all functions and check its accessibility inside various functions.

#include<stdio.h>

 //Global variables
 int num1,num2; 

//Functions Declaration
int add();
int sub();
int mul();
int div();

int main()
{    
    //input numbers from user
    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("The numbers are: %d %d",num1 ,num2);
      
    //displaying return values from functions
    printf("\nAddition: %d",add());
    printf("\nsubtraction: %d ",sub());
    printf("\nmultiplication: %d",mul());

    if (num2 != 0)
      printf("\ndivision: %d", div());
    else
    printf("invalid division");

    return 0;

}
    //function definition
    //no need to add parameters as the function can directly access these variables
  int add()
  {return num1+num2;}  

  int sub()
  { return num1-num2; }

  int mul()
{ return num1*num2;}

int div()
{return num1/num2;}
  