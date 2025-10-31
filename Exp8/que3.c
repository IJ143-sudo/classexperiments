/*Write a function that accepts pointers as parameters. Pass variables by reference
using pointers and modify their values within the function.*/

#include<stdio.h>

    void func(int *a , int *b, int *c) //function to modify numbers
    {
        int *arr[3]={a,b,c};

        for(int i=0; i<3; i++)
       { if ( *arr[i]>0)
        *arr[i]= *arr[i] * 2;  //multiply +ve numbers by 2

        else if(*arr[i]<0)
          *arr[i]=*arr[i] * -1;  //making negative numbers positive

        else
        *arr[i]=10;   //channg zero to 10
       }
    }

    int main()
    {  
        //input 3 numbers
        int x, y, z;
        printf("Enter three integers: ");
        scanf("%d %d %d", &x, &y, &z);

        //print before modifying values
        printf("\nBefore modifying values:\n");
        printf("a=%d, b=%d, c=%d\n",x, y, z);

        func(&x, &y, &z);  //calling the function

        //print after modification values
        printf("\nafter modifying values: ");
        printf("a=%d, b=%d, c=%d\n", x, y, z);

        return 0;
    }
         
     
