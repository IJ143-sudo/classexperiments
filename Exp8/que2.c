/* Perform pointer arithmetic (increment and decrement) on pointers of different data
types. Observe how the memory addresses change and the effects on data
access*/

#include<stdio.h>
int main()
{
    int a[3];
    char b[3];
    float c[3];
    double d[3];

    //get the different inputs
    printf("Enter 3 integers: ");
    for(int i =0; i<3; i++)
      scanf("%d",&a[i]);

    printf("Enter 3 characters: ");
    for(int i =0; i<3; i++)
      scanf(" %c",&b[i]);
      
    printf("Enter 3 floats: ");
    for(int i=0; i<3; i++)
      scanf(" %f",&c[i]);

    printf("Enter 3 doubles: ");
    for(int i=0; i<3; i++)
      scanf(" %lf",&d[i]);

      //initialise pointers
     int *ptr1 = a;
    char *ptr2 = b;
    float  *ptr3 = c;
    double *ptr4 = d;
    
    //print initial address and value at that address
    printf("\nInitial values: ");
    printf("\n%u %d",ptr1, *ptr1);
    printf("\n%u %c",ptr2, *ptr2);
    printf("\n%u %.2f",ptr3, *ptr3);
    printf("\n%u %.2lf",ptr4, *ptr4);

    ptr1++; ptr2++; ptr3++; ptr4++;   //increment 
     
    //print the  address and the value there after increment
    //pointer increments the value according to the data type size

    printf("\n\nValues after increment");
    printf("\n%u %d",ptr1, *ptr1);
    printf("\n%u %c",ptr2, *ptr2);
    printf("\n%u %.2f",ptr3, *ptr3);
    printf("\n%u %.2lf",ptr4, *ptr4);

    return 0;


}
