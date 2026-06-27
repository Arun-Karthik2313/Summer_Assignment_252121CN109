#include <stdio.h>
#include <string.h>

int main() {
    int max_students = 100;
    int roll_no[max_students];
    char names[max_students][50];
    float marks[max_students];
    int count = 0;
    int choice;

    while(1) {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Student Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter choice (1-4): ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting student database. Goodbye!\n");
            break;
        }

        switch(choice) {
            case 1:
                if (count < max_students) {
                    printf("Enter Roll Number: ");
                    scanf("%d", &roll_no[count]);
                    getchar(); // Clear buffer
                    printf("Enter Name: ");
                    scanf("%[^\n]", names[count]);
                    printf("Enter Marks: ");
                    scanf("%f", &marks[count]);
                    count++;
                    printf("Record saved successfully!\n");
                } else {
                    printf("Database storage full!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No records found.\n");
                } else {
                    printf("\n%-10s %-25s %-10s\n", "Roll No", "Name", "Marks");
                    printf("---------------------------------------------\n");
                    for (int i = 0; i < count; i++) {
                        printf("%-10d %-25s %-10.2f\n", roll_no[i], names[i], marks[i]);
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    printf("Database is empty.\n");
                } else {
                    int search_roll, found = 0;
                    printf("Enter Roll Number to search: ");
                    scanf("%d", &search_roll);
                    for (int i = 0; i < count; i++) {
                        if (roll_no[i] == search_roll) {
                            printf("\nRecord Found:\nRoll No: %d\nName: %s\nMarks: %.2f\n", 
                                   roll_no[i], names[i], marks[i]);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Student with Roll Number %d not found.\n", search_roll);
                    }
                }
                break;

            default:
                printf("Invalid option! Try again.\n");
        }
    }
    return 0;
}
