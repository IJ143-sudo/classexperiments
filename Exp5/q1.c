/*WAP to read a list of integers and store it in a single dimensional array. Write a C
program to print the second largest integer in a list of integers.*/

#include<stdio.h>

int main()
{
    int size;

        //Input size for array
    printf("Enter size for array: ");
    scanf("%d", &size);

    int arr[size];

         //read and store the elements
      printf("Enter %d elements: ",size);
       for(int i=0;i<size;i++)
      scanf("%d", &arr[i]);

        //print the array
      printf("The elements in the array are: ");
        for(int i=0;i<size;i++)
      printf("%d ",arr[i]);

       //calcaulation for second largest number
           int first= arr[0],second=-1 ;    //(marker)
           for(int i=1;i<size;i++)
           { 
            if (arr[i]>first)
             {  second=first;
               first=arr[i];
             }else if (arr[i]<first && (arr[i]>second))
                second=arr[i];
           }    
              
         printf("\nSecond largest number: %d",second);

    return 0;
}