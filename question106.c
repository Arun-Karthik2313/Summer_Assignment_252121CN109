#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main() {
    int max_employees = 100;
    struct Employee e[max_employees];
    int count = 0;
    int choice;

    while(1) {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(count < max_employees) {
                printf("Enter ID: ");
                scanf("%d", &e[count].id);
                getchar(); // Clear newline buffer
                printf("Enter Name: ");
                scanf("%[^\n]", e[count].name);
                getchar(); // Clear buffer again
                printf("Enter Department: ");
                scanf("%[^\n]", e[count].department);
                printf("Enter Salary: ");
                scanf("%f", &e[count].salary);
                count++;
                printf("Employee profile added successfully!\n");
            } else {
                printf("Database storage full!\n");
            }
        } 
        else if(choice == 2) {
            if(count == 0) {
                printf("No employee profiles found.\n");
            } else {
                printf("\n%-10s %-20s %-15s %-10s\n", "ID", "Name", "Department", "Salary");
                printf("------------------------------------------------------------\n");
                for(int i = 0; i < count; i++) {
                    printf("%-10d %-20s %-15s %-10.2f\n", e[i].id, e[i].name, e[i].department, e[i].salary);
                }
            }
        } 
        else if(choice == 3) {
            if(count == 0) {
                printf("No records available to search.\n");
            } else {
                int search_id, found = 0;
                printf("Enter Employee ID to search: ");
                scanf("%d", &search_id);
                for(int i = 0; i < count; i++) {
                    if(e[i].id == search_id) {
                        printf("\nEmployee Profile Found:\nID: %d\nName: %s\nDepartment: %s\nSalary: %.2f\n", 
                               e[i].id, e[i].name, e[i].department, e[i].salary);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("Employee with ID %d not found.\n", search_id);
                }
            }
        } 
        else if(choice == 4) {
            printf("Exiting system. Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid options selected! Try again.\n");
        }
    }
    return 0;
}

