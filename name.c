#include <stdio.h>
int main()
{
    char name[20]; //char array to store name
    int age;      //int to store age

    printf("please enter your name: ");
    scanf("%s", &name);

    printf("enter your age: ");
    scanf("%d", &age);

    printf("Name: %s ,Age: %d", name , age);
    
    return 0;

}