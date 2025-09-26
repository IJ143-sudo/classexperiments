//Declare a static local variable inside a function.Observe how its value persists across function calls

#include<stdio.h>

int func(int x, int y)
{
static int num = 4;
num = num+x+y;
return num;
} 
   
int main()
{
    int num1 , num2 ;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("\nResult of first call\n%d",func(num1,num2));
    
    printf("\nResult of second call\n%d",func(num1,num2));
    
    printf("\nResult of third call\n%d",func(num1,num2));
    
return 0;

}