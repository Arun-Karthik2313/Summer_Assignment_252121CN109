#include <stdio.h>

int main() {
    int max_size = 100;
    int a[max_size];
    int size = 0;
    int choice, element, pos, found;

    while(1) {
        printf("\n--- Menu-Driven Array Operations System ---\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Search Element\n");
        printf("4. Display Array\n");
        printf("5. Exit\n");
        printf("Enter choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting system. Goodbye!\n");
            break;
        }

        switch(choice) {
            case 1:
                if (size >= max_size) {
                    printf("Array overflow! Cannot insert more elements.\n");
                } else {
                    printf("Enter element to insert: ");
                    scanf("%d", &element);
                    printf("Enter position (0 to %d): ", size);
                    scanf("%d", &pos);
                    
                    if (pos < 0 || pos > size) {
                        printf("Invalid position!\n");
                    } else {
                        for (int i = size; i > pos; i--) {
                            a[i] = a[i - 1];
                        }
                        a[pos] = element;
                        size++;
                        printf("Element inserted successfully!\n");
                    }
                }
                break;

            case 2:
                if (size == 0) {
                    printf("Array underflow! No elements to delete.\n");
                } else {
                    printf("Enter position to delete (0 to %d): ", size - 1);
                    scanf("%d", &pos);
                    
                    if (pos < 0 || pos >= size) {
                        printf("Invalid position!\n");
                    } else {
                        printf("Deleted element: %d\n", a[pos]);
                        for (int i = pos; i < size - 1; i++) {
                            a[i] = a[i + 1];
                        }
                        size--;
                    }
                }
                break;

            case 3:
                if (size == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Enter element to search: ");
                    scanf("%d", &element);
                    found = -1;
                    for (int i = 0; i < size; i++) {
                        if (a[i] == element) {
                            found = i;
                            break;
                        }
                    }
                    if (found != -1) {
                        printf("Element found at index: %d\n", found);
                    } else {
                        printf("Element not found in the array.\n");
                    }
                }
                break;

            case 4:
                if (size == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Array elements: ");
                    for (int i = 0; i < size; i++) {
                        printf("%d ", a[i]);
                    }
                    printf("\n");
                }
                break;

            default:
                printf("Invalid selection! Try again.\n");
        }
    }
    return 0;
}

