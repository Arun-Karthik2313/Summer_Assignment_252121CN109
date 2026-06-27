#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float base_salary;
    float allowance;
    float deduction;
    float net_salary;
};

int main() {
    int max_records = 100;
    struct Employee e[max_records];
    int count = 0;
    int choice;

    while(1) {
        printf("\n--- Salary Management System ---\n");
        printf("1. Calculate and Add Salary Slip\n");
        printf("2. Display All Payroll Records\n");
        printf("3. Search Payroll by Employee ID\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(count < max_records) {
                printf("Enter Employee ID: ");
                scanf("%d", &e[count].id);
                getchar(); // Clear buffer
                printf("Enter Name: ");
                scanf("%[^\n]", e[count].name);
                printf("Enter Base Salary: ");
                scanf("%f", &e[count].base_salary);
                printf("Enter Allowances: ");
                scanf("%f", &e[count].allowance);
                printf("Enter Deductions: ");
                scanf("%f", &e[count].deduction);
                
                // Calculate net pay
                e[count].net_salary = e[count].base_salary + e[count].allowance - e[count].deduction;
                count++;
                printf("Salary calculation completed successfully!\n");
            } else {
                printf("Payroll database full!\n");
            }
        } 
        else if(choice == 2) {
            if(count == 0) {
                printf("No payroll records found.\n");
            } else {
                printf("\n%-10s %-20s %-12s %-12s %-12s %-12s\n", "ID", "Name", "Base", "Allowance", "Deduction", "Net Salary");
                printf("--------------------------------------------------------------------------------\n");
                for(int i = 0; i < count; i++) {
                    printf("%-10d %-20s %-12.2f %-12.2f %-12.2f %-12.2f\n", 
                           e[i].id, e[i].name, e[i].base_salary, e[i].allowance, e[i].deduction, e[i].net_salary);
                }
            }
        } 
        else if(choice == 3) {
            if(count == 0) {
                printf("No payroll data available to search.\n");
            } else {
                int search_id, found = 0;
                printf("Enter Employee ID: ");
                scanf("%d", &search_id);
                for(int i = 0; i < count; i++) {
                    if(e[i].id == search_id) {
                        printf("\nSalary Slip Found:\n");
                        printf("ID: %d\nName: %s\nBase Salary: %.2f\nAllowance: %.2f\nDeduction: %.2f\nNet Salary: %.2f\n", 
                               e[i].id, e[i].name, e[i].base_salary, e[i].allowance, e[i].deduction, e[i].net_salary);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("No payroll record found for ID %d.\n", search_id);
                }
            }
        } 
        else if(choice == 4) {
            printf("Exiting Payroll System. Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid selection! Try again.\n");
        }
    }
    return 0;
}
