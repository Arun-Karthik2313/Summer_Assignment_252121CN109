#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
    int is_issued;
};

int main() {
    int max_books = 100;
    struct Book b[max_books];
    int count = 0;
    int choice;

    while(1) {
        printf("\n--- Library Management System ---\n");
        printf("1. Add New Book\n");
        printf("2. Display All Books\n");
        printf("3. Issue a Book\n");
        printf("4. Return a Book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(count < max_books) {
                printf("Enter Book ID: ");
                scanf("%d", &b[count].id);
                getchar(); // Clear buffer
                printf("Enter Title: ");
                scanf("%[^\n]", b[count].title);
                getchar(); // Clear buffer
                printf("Enter Author: ");
                scanf("%[^\n]", b[count].author);
                b[count].is_issued = 0; // Book is available initially
                count++;
                printf("Book cataloged successfully!\n");
            } else {
                printf("Library database storage full!\n");
            }
        } 
        else if(choice == 2) {
            if(count == 0) {
                printf("No books available in the inventory.\n");
            } else {
                printf("\n%-10s %-30s %-25s %-15s\n", "Book ID", "Title", "Author", "Status");
                printf("----------------------------------------------------------------------------\n");
                for(int i = 0; i < count; i++) {
                    printf("%-10d %-30s %-25s %-15s\n", 
                           b[i].id, b[i].title, b[i].author, 
                           (b[i].is_issued == 1) ? "Issued" : "Available");
                }
            }
        } 
        else if(choice == 3) {
            if(count == 0) {
                printf("No books available to issue.\n");
            } else {
                int search_id, found = 0;
                printf("Enter Book ID to issue: ");
                scanf("%d", &search_id);
                for(int i = 0; i < count; i++) {
                    if(b[i].id == search_id) {
                        found = 1;
                        if(b[i].is_issued == 1) {
                            printf("Sorry, this book is already issued out.\n");
                        } else {
                            b[i].is_issued = 1;
                            printf("Book successfully issued!\n");
                        }
                        break;
                    }
                }
                if(!found) {
                    printf("Book ID %d not found in records.\n", search_id);
                }
            }
        } 
        else if(choice == 4) {
            if(count == 0) {
                printf("No books registered to return.\n");
            } else {
                int search_id, found = 0;
                printf("Enter Book ID to return: ");
                scanf("%d", &search_id);
                for(int i = 0; i < count; i++) {
                    if(b[i].id == search_id) {
                        found = 1;
                        if(b[i].is_issued == 0) {
                            printf("This book is already sitting in the library inventory.\n");
                        } else {
                            b[i].is_issued = 0;
                            printf("Book successfully returned to shelf!\n");
                        }
                        break;
                    }
                }
                if(!found) {
                    printf("Book ID %d not found in records.\n", search_id);
                }
            }
        } 
        else if(choice == 5) {
            printf("Exiting Library Management System. Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid selection! Try again.\n");
        }
    }
    return 0;
}
