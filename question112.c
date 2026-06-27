#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    int max_contacts = 100;
    struct Contact directory[max_contacts];
    int count = 0;
    int choice;

    while(1) {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add New Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact by Name\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(count < max_contacts) {
                getchar(); // Clear buffer
                printf("Enter Name: ");
                scanf("%[^\n]", directory[count].name);
                getchar(); // Clear buffer
                printf("Enter Phone Number: ");
                scanf("%[^\n]", directory[count].phone);
                getchar(); // Clear buffer
                printf("Enter Email Address: ");
                scanf("%[^\n]", directory[count].email);
                count++;
                printf("Contact added successfully!\n");
            } else {
                printf("Directory storage full!\n");
            }
        } 
        else if(choice == 2) {
            if(count == 0) {
                printf("No contacts found in the directory.\n");
            } else {
                printf("\n%-20s %-15s %-25s\n", "Name", "Phone", "Email");
                printf("------------------------------------------------------------\n");
                for(int i = 0; i < count; i++) {
                    printf("%-20s %-15s %-25s\n", directory[i].name, directory[i].phone, directory[i].email);
                }
            }
        } 
        else if(choice == 3) {
            if(count == 0) {
                printf("No records available to search.\n");
            } else {
                char search_name[50];
                int found = 0;
                getchar(); // Clear buffer
                printf("Enter Name to search: ");
                scanf("%[^\n]", search_name);
                for(int i = 0; i < count; i++) {
                    if(strcasecmp(directory[i].name, search_name) == 0) {
                        printf("\nContact Found:\nName : %s\nPhone: %s\nEmail: %s\n", 
                               directory[i].name, directory[i].phone, directory[i].email);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("Contact name '%s' not found.\n", search_name);
                }
            }
        } 
        else if(choice == 4) {
            printf("Exiting Contact Directory. Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid selection! Try again.\n");
        }
    }
    return 0;
}

