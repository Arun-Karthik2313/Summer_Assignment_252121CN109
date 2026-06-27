#include <stdio.h>
#include <string.h>

int main() {
    int max_emp = 100;
    int emp_id[max_emp];
    char names[max_emp][50];
    float salary[max_emp];
    int count = 0;
    int choice;

    while(1) {
        printf("\n--- Mini Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter choice (1-4): ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting system. Goodbye!\n");
            break;
        }

        switch(choice) {
            case 1:
                if (count < max_emp) {
                    printf("Enter Employee ID: ");
                    scanf("%d", &emp_id[count]);
                    getchar(); // Clear newline buffer
                    printf("Enter Name: ");
                    scanf("%[^\n]", names[count]);
                    printf("Enter Salary: ");
                    scanf("%f", &salary[count]);
                    count++;
                    printf("Employee profile added successfully!\n");
                } else {
                    printf("Database storage full!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No profiles available.\n");
                } else {
                    printf("\n%-10s %-30s %-10s\n", "Emp ID", "Name", "Salary");
                    printf("--------------------------------------------------\n");
                    for (int i = 0; i < count; i++) {
                        printf("%-10d %-30s $%-10.2f\n", emp_id[i], names[i], salary[i]);
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    printf("Employee database is empty.\n");
                } else {
                    int search_id, found = 0;
                    printf("Enter Employee ID to search: ");
                    scanf("%d", &search_id);
                    for (int i = 0; i < count; i++) {
                        if (emp_id[i] == search_id) {
                            printf("\nEmployee Found:\nID: %d\nName: %s\nSalary: $%.2f\n", 
                                   emp_id[i], names[i], salary[i]);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Employee with ID %d not found.\n", search_id);
                    }
                }
                break;

            default:
                printf("Invalid option! Try again.\n");
        }
    }
    return 0;
}
