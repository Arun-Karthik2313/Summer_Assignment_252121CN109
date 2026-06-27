#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

// Global structures to store product data neatly
struct Product {
    int id;
    char name[50];
    int qty;
    float price;
};

struct Product inventory[MAX_ITEMS];
int item_count = 0;

// Function prototypes
void addItem();
void displayInventory();
void searchItem();
void calculateValuation();

int main() {
    int choice;

    while(1) {
        printf("\n--- Retail Store Inventory Dashboard ---\n");
        printf("1. Add New Product\n");
        printf("2. View Stock Inventory\n");
        printf("3. Search Product by Name\n");
        printf("4. Total Inventory Valuation\n");
        printf("5. Exit System\n");
        printf("Enter choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting management dashboard. Goodbye!\n");
            break;
        }

        switch(choice) {
            case 1: addItem(); break;
            case 2: displayInventory(); break;
            case 3: searchItem(); break;
            case 4: calculateValuation(); break;
            default: printf("Invalid selection! Please enter 1-5.\n");
        }
    }
    return 0;
}

// Function to add a product item into structure array
void addItem() {
    if (item_count >= MAX_ITEMS) {
        printf("Warehouse database storage limit reached!\n");
        return;
    }
    printf("Enter Product ID: ");
    scanf("%d", &inventory[item_count].id);
    getchar(); // Clear trailing newline buffer
    
    printf("Enter Product Name: ");
    scanf("%[^\n]", inventory[item_count].name);
    
    printf("Enter Stock Quantity: ");
    scanf("%d", &inventory[item_count].qty);
    
    printf("Enter Unit Price: ");
    scanf("%f", &inventory[item_count].price);
    
    item_count++;
    printf("Product registered successfully!\n");
}

// Function to display array content strings
void displayInventory() {
    if (item_count == 0) {
        printf("The inventory log is currently empty!\n");
        return;
    }
    printf("\n%-10s %-25s %-10s %-10s\n", "ID", "Product Name", "Quantity", "Unit Price");
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < item_count; i++) {
        printf("%-10d %-25s %-10d $%-10.2f\n", 
               inventory[i].id, inventory[i].name, inventory[i].qty, inventory[i].price);
    }
}

// Function using string search comparison
void searchItem() {
    if (item_count == 0) {
        printf("No records available to perform a search.\n");
        return;
    }
    char query[50];
    int found = 0;
    getchar(); // Clear trailing newline buffer
    printf("Enter Product Name to find: ");
    scanf("%[^\n]", query);

    for (int i = 0; i < item_count; i++) {
        if (strcasecmp(inventory[i].name, query) == 0) {
            printf("\nProduct Match Found:\nID: %d\nName: %s\nStock Level: %d\nPrice: $%.2f\n", 
                   inventory[i].id, inventory[i].name, inventory[i].qty, inventory[i].price);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Product item matching '%s' was not found.\n", query);
    }
}

// Function for processing and financial parameters calculations
void calculateValuation() {
    if (item_count == 0) {
        printf("Inventory is empty. Financial balance valuation is $0.00\n");
        return;
    }
    float total_value = 0;
    for (int i = 0; i < item_count; i++) {
        total_value += inventory[i].qty * inventory[i].price;
    }
    printf("\nTotal Active Stock Types: %d\n", item_count);
    printf("Total Managed Asset Valuation: $%.2f\n", total_value);
}
