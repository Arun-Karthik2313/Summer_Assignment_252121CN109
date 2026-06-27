#include <stdio.h>
#include <string.h>

int main() {
    int max_books = 100;
    int book_id[max_books];
    char titles[max_books][50];
    int count = 0;
    int choice;

    while(1) {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Exit\n");
        printf("Enter choice (1-4): ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting system. Goodbye!\n");
            break;
        }

        switch(choice) {
            case 1:
                if (count < max_books) {
                    printf("Enter Book ID: ");
                    scanf("%d", &book_id[count]);
                    getchar(); // Clear newline buffer
                    printf("Enter Title: ");
                    scanf("%[^\n]", titles[count]);
                    count++;
                    printf("Book added successfully!\n");
                } else {
                    printf("Library shelf full!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No books available.\n");
                } else {
                    printf("\n%-10s %-30s\n", "Book ID", "Title");
                    printf("----------------------------------------\n");
                    for (int i = 0; i < count; i++) {
                        printf("%-10d %-30s\n", book_id[i], titles[i]);
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    printf("Library catalog is empty.\n");
                } else {
                    int search_id, found = 0;
                    printf("Enter Book ID to search: ");
                    scanf("%d", &search_id);
                    for (int i = 0; i < count; i++) {
                        if (book_id[i] == search_id) {
                            printf("\nBook Found:\nID: %d\nTitle: %s\n", book_id[i], titles[i]);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Book with ID %d not found.\n", search_id);
                    }
                }
                break;

            default:
                printf("Invalid option! Try again.\n");
        }
    }
    return 0;
}
