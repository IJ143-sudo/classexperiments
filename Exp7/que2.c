/*Write a C program to compute the monthly pay of 100 employees using each
employee‗s name, basic pay. The DA is computed as 52% of the basic pay.
Gross-salary (basic pay + DA). Print the employees name and gross salary*/

#include <stdio.h>

// Structure to store employee details
struct Employee
 {
    char name[50];
    float basicPay;
    float grossSalary;
};

// Function to calculate gross salary
float Gross(float basicPay) 
{
    float DA = 0.52 * basicPay;        // 52% of basic pay
    return basicPay + DA;              // Gross salary = basic + DA
}

int main() {
    struct Employee emp[100];  // Array for 100 employees
    int i, n;
    float DA;

    printf("Enter number of employees: ");
    scanf("%d", &n);
    getchar(); // clear newline left by scanf

    // Input employee details
    for (i = 0; i < n; i++) 
    {
        printf("Enter details of employee %d: ", i + 1);

        printf("Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);

        // Remove trailing newline manually
        int j = 0;
        while (emp[i].name[j] != '\0')
         {
            if (emp[i].name[j] == '\n') 
            {
                emp[i].name[j] = '\0';
                break;
            }
            j++;
        }

        printf("Basic Pay: ");
        scanf("%f", &emp[i].basicPay);
        getchar(); // clear newline before next fgets()

        // Calculate gross salary using function
        emp[i].grossSalary = Gross(emp[i].basicPay);
    }

    // Display employee details
    printf("%-12s %-12s %-12s %-12s\n", "Name", "Basic Pay", "DA", "Gross Salary");

    for (i = 0; i < n; i++)
     {
        DA = 0.52 * emp[i].basicPay;
        printf("%-12s %-12.2f %-12.2f %-12.2f\n", emp[i].name, emp[i].basicPay, DA, emp[i].grossSalary);
    }

    return 0;
}