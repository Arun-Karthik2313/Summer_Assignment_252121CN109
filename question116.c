#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int qty;
    float price;
};

int main() {
    int max_items = 100;
    struct Item inv[max_items];
    int count = 0;
    int choice;

    while(1) {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add New Item\n");
        printf("2. Display Inventory\n");
        printf("3. Update Stock Quantity\n");
        printf("4. Exit\n");
        printf("Enter choice (1-4): ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting inventory system. Goodbye!\n");
            break;
        }

        switch(choice) {
            case 1:
                if (count < max_items) {
                    printf("Enter Item ID: ");
                    scanf("%d", &inv[count].id);
                    getchar(); // Clear newline buffer
                    printf("Enter Item Name: ");
                    scanf("%[^\n]", inv[count].name);
                    printf("Enter Quantity: ");
                    scanf("%d", &inv[count].qty);
                    printf("Enter Price: ");
                    scanf("%f", &inv[count].price);
                    count++;
                    printf("Item added successfully!\n");
                } else {
                    printf("Inventory database full!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("Inventory is empty!\n");
                } else {
                    printf("\n%-10s %-25s %-10s %-10s\n", "Item ID", "Name", "Quantity", "Price");
                    printf("----------------------------------------------------\n");
                    for (int i = 0; i < count; i++) {
                        printf("Basic layout setup complete: %-10d %-25s %-10d $%-10.2f\n", 
                               inv[i].id, inv[i].name, inv[i].qty, inv[i].price);
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    printf("No items available to update.\n");
                } else {
                    int search_id, found = 0;
                    printf("Enter Item ID to update stock: ");
                    scanf("%d", &search_id);
                    for (int i = 0; i < count; i++) {
                        if (inv[i].id == search_id) {
                            printf("Current Quantity: %d\n", inv[i].qty);
                            printf("Enter New Quantity: ");
                            scanf("%d", &inv[i].qty);
                            printf("Stock updated successfully!\n");
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Item ID not found.\n");
                    }
                }
                break;

            default:
                printf("Invalid selection! Try again.\n");
        }
    }
    return 0;
}
