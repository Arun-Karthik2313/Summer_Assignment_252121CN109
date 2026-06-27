#include <stdio.h>

struct Marksheet {
    int roll_no;
    char name[50];
    int math;
    int science;
    int english;
    int total;
    float percentage;
    char grade;
};

int main() {
    int max_records = 100;
    struct Marksheet m[max_records];
    int count = 0;
    int choice;

    while(1) {
        printf("\n--- Marksheet Generation System ---\n");
        printf("1. Add Student Marks\n");
        printf("2. Display All Marksheets\n");
        printf("3. Search Marksheet by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(count < max_records) {
                printf("Enter Roll Number: ");
                scanf("%d", &m[count].roll_no);
                getchar(); // Clear buffer
                printf("Enter Name: ");
                scanf("%[^\n]", m[count].name);
                printf("Enter Math marks (out of 100): ");
                scanf("%d", &m[count].math);
                printf("Enter Science marks (out of 100): ");
                scanf("%d", &m[count].science);
                printf("Enter English marks (out of 100): ");
                scanf("%d", &m[count].english);

                // Calculations
                m[count].total = m[count].math + m[count].science + m[count].english;
                m[count].percentage = m[count].total / 3.0;

                // Grade Assignment
                if(m[count].percentage >= 90) m[count].grade = 'A';
                else if(m[count].percentage >= 75) m[count].grade = 'B';
                else if(m[count].percentage >= 50) m[count].grade = 'C';
                else if(m[count].percentage >= 35) m[count].grade = 'D';
                else m[count].grade = 'F';

                count++;
                printf("Marksheet data recorded successfully!\n");
            } else {
                printf("Database storage full!\n");
            }
        } 
        else if(choice == 2) {
            if(count == 0) {
                printf("No marksheets generated yet.\n");
            } else {
                printf("\n%-10s %-20s %-6s %-8s %-8s %-6s %-8s %-5s\n", 
                       "Roll No", "Name", "Math", "Science", "English", "Total", "Perc%", "Grade");
                printf("--------------------------------------------------------------------------------\n");
                for(int i = 0; i < count; i++) {
                    printf("%-10d %-20s %-6d %-8d %-8d %-6d %-8.2f %-5c\n", 
                           m[i].roll_no, m[i].name, m[i].math, m[i].science, m[i].english, 
                           m[i].total, m[i].percentage, m[i].grade);
                }
            }
        } 
        else if(choice == 3) {
            if(count == 0) {
                printf("No marksheets available to search.\n");
            } else {
                int search_roll, found = 0;
                printf("Enter Roll Number: ");
                scanf("%d", &search_roll);
                for(int i = 0; i < count; i++) {
                    if(m[i].roll_no == search_roll) {
                        printf("\n========================================\n");
                        printf("               MARKSHEET                \n");
                        printf("========================================\n");
                        printf("Roll Number : %d\n", m[i].roll_no);
                        printf("Name        : %s\n", m[i].name);
                        printf("----------------------------------------\n");
                        printf("Math        : %d / 100\n", m[i].math);
                        printf("Science     : %d / 100\n", m[i].science);
                        printf("English     : %d / 100\n", m[i].english);
                        printf("----------------------------------------\n");
                        printf("Total       : %d / 300\n", m[i].total);
                        printf("Percentage  : %.2f%%\n", m[i].percentage);
                        printf("Final Grade : %c\n", m[i].grade);
                        printf("Result      : %s\n", (m[i].grade == 'F') ? "FAIL" : "PASS");
                        printf("========================================\n");
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("Marksheet for Roll Number %d not found.\n", search_roll);
                }
            }
        } 
        else if(choice == 4) {
            printf("Exiting Marksheet System. Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid selection! Try again.\n");
        }
    }
    return 0;
}
