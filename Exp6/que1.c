/*Develop a recursive and non-recursive function FACT(num) to find the factorial of
a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). 

Using this function, write a C program to compute the binomial coefficient.
Tabulate the results for different values of n and r with suitable messages*/

#include<stdio.h>

int factnonrecur(int num);
int factrecur(int n);
int binocoeff(int n, int r);

int main()
{
    int n , r;
    printf("Enter two number; ");
    scanf("%d %d",&n,&r);

     if (r > n || n < 0 || r < 0) {
        printf("Invalid input! (r should be smaller and non-negative)\n");
        return 0;
    }

    printf("\nBinomial Coefficient Table\n");
    printf("n\tr\tC(n,r)\n");
   

    for (int i = 0; i <= n; i++)
     {
        printf("%d\t%d\t%d\n", n, i, binocoeff(n, i));
    }

    printf("\nC(%d, %d) = %d\n", n, r, binocoeff(n, r));

    return 0;
}


int factnonrecur(int num)
    {
             int result=1;
            for (int i=1; i<= num;i++)
             result = result *i;
             return result;
        
    }

    int factrecur(int n)
    {
        if (n=0)
         return 1;
         else 
            return n * factrecur(n-1);
         
    }

    int binocoeff(int n, int r)
   { return factnonrecur(n) / (factnonrecur(r) * factnonrecur(n - r));}
