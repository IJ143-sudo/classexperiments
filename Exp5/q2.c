/* WAP to read a list of integers and store it in a single dimensional array. Write a C
program to count and display positive, negative, odd, and even numbers in an array*/

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
    
       // Counters
    int positive = 0, negative = 0, even = 0, odd = 0;

    // Traverse array and count
    for(int i = 0; i < size ; i++)
     {
        if(arr[i] >= 0)
            positive++;
        else
            negative++;

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Display results
    printf("\nCount of positive numbers: %d", positive);
    printf("\nCount of negative numbers: %d", negative);
    printf("\nCount of even numbers: %d", even);
    printf("\nCount of odd numbers: %d\n", odd);

    return 0;
}