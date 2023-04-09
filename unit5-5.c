#include <stdio.h>

struct employee {
    int emp_id;
    char emp_name[50];
    char address[100];
    int salary;
};

int main() {
    struct employee emp[100];
    int n, i, count = 0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Read information for n employees
    for (i = 0; i < n; i++) {
        printf("Enter information for employee %d:\n", i + 1);
        printf("  Employee ID: ");
        scanf("%d", &emp[i].emp_id);
        printf("  Name: ");
        scanf("%s", emp[i].emp_name);
        printf("  Address: ");
        scanf("%s", emp[i].address);
        printf("  Salary: ");
        scanf("%d", &emp[i].salary);
    }

    // Print the number of employees with salary > 4000
    for (i = 0; i < n; i++) {
        if (emp[i].salary > 4000) {
            count++;
        }
    }

    printf("Number of employees with salary greater than 4000: %d\n", count);

    return 0;
}
