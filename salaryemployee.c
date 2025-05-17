#include <stdio.h>

#define MAX_EMPLOYEES 100

// Define structure for Employee
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int n;
    float totalSalary = 0.0, averageSalary;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_EMPLOYEES) {
        printf("Invalid number of employees.\n");
        return 1;
    }

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);  // to read full name with spaces
        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        if (employees[i].salary < 0) {
            printf("Salary cannot be negative. Try again.\n");
            i--;
            continue;
        }

        totalSalary += employees[i].salary;
    }

    averageSalary = totalSalary / n;

    printf("\nAverage salary of %d employees = %.2f\n", n, averageSalary);

    return 0;
}
Enter number of employees: 2

Enter details for employee 1
ID: 12345
Name: chandana
Salary: 15000

Enter details for employee 2
ID: 456789
Name: sinchana
Salary: 16000

Average salary of 2 employees = 15500.00
