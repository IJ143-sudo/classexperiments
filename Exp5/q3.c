/*WAP to read a list of integers and store it in a single dimensional array. Write a C
program to find the frequency of a particular number in a list of integers.*/

#include<stdio.h>

int main()
{
    int size, num;

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
     
       // Input the number whose frequency is to be found
    printf("\nEnter the number to find its frequency: ");
    scanf("%d", &num);

    int count=0;
    // Count frequency of numin array
    for(int i = 0; i < size; i++)
     {
        if(arr[i] == num) 
            count++;
    }

    // Display result
    printf("The frequency of %d is: %d\n", num, count);

    return 0;
}
      
 
   