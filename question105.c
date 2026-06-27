#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    int max_students = 100;
    struct Student s[max_students];
    int count = 0;
    int choice;

    while(1) {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(count < max_students) {
                printf("Enter ID: ");
                scanf("%d", &s[count].id);
                getchar(); // Clear newline buffer
                printf("Enter Name: ");
                scanf("%[^\n]", s[count].name);
                printf("Enter Marks: ");
                scanf("%f", &s[count].marks);
                count++;
                printf("Record added successfully!\n");
            } else {
                printf("System storage full!\n");
            }
        } 
        else if(choice == 2) {
            if(count == 0) {
                printf("No records found.\n");
            } else {
                printf("\n%-10s %-20s %-10s\n", "ID", "Name", "Marks");
                printf("----------------------------------------\n");
                for(int i = 0; i < count; i++) {
                    printf("%-10d %-20s %-10.2f\n", s[i].id, s[i].name, s[i].marks);
                }
            }
        } 
        else if(choice == 3) {
            if(count == 0) {
                printf("No records available to search.\n");
            } else {
                int search_id, found = 0;
                printf("Enter ID to search: ");
                scanf("%d", &search_id);
                for(int i = 0; i < count; i++) {
                    if(s[i].id == search_id) {
                        printf("\nRecord Found:\nID: %d\nName: %s\nMarks: %.2f\n", s[i].id, s[i].name, s[i].marks);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("Student with ID %d not found.\n", search_id);
                }
            }
        } 
        else if(choice == 4) {
            printf("Exiting system. Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid choices! Try again.\n");
        }
    }
    return 0;
}
