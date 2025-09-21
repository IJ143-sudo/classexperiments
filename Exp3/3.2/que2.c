/* WAP to print the multiplication table of the number entered by the user. It should
be in the correct formatting. Num * 1 = Num*/

#include<stdio.h>
int main()
{
    int n,MUL;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<=10; i++)
    {
        MUL=n*i;
        printf("\n%d*%d=%d",n,i,MUL);
        
    }
        return 0;
}