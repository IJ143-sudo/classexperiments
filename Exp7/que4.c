/*Create a union containing 6 strings: name, home_address, hostel_address, city,
state and zip. Write a C program to display your present address. */

#include <stdio.h>
#include <string.h>

// Union to store address-related strings
union Address 
{
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
};

int main()
 {
    union Address u;

    char name[50], hostel[100], city[50], state[50];

    printf("Enter your name: ");
    gets(u.name);
    strcpy(name, u.name);  // store in separate variable

    printf("Enter your hostel address: ");
    gets(u.hostel_address);
    strcpy(hostel, u.hostel_address);

    printf("Enter city: ");
    gets(u.city);
    strcpy(city, u.city);

    printf("Enter state: ");
    gets(u.state);
    strcpy(state, u.state);

    // Display Present Address
    printf("\nPresent Address:\n");
    printf("%s\n", name);
    printf("%s,\n", hostel);
    printf("%s,%s", city, state);

    return 0;
}