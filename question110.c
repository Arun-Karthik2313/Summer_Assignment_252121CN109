#include <stdio.h>
#include <string.h>

struct Account {
    int acc_no;
    char name[100];
    float balance;
};

int main() {
    int max_accounts = 100;
    struct Account bank[max_accounts];
    int count = 0;
    int choice;

    while(1) {
        printf("\n--- Banking Account System ---\n");
        printf("1. Open New Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(count < max_accounts) {
                printf("Enter Account Number: ");
                scanf("%d", &bank[count].acc_no);
                getchar(); // Clear newline buffer
                printf("Enter Account Holder Name: ");
                scanf("%[^\n]", bank[count].name);
                printf("Enter Initial Deposit: ");
                scanf("%f", &bank[count].balance);
                count++;
                printf("Account created successfully!\n");
            } else {
                printf("Bank system storage full!\n");
            }
        } 
        else if(choice == 2) {
            if(count == 0) {
                printf("No accounts found.\n");
            } else {
                int search_acc, found = 0;
                float amount;
                printf("Enter Account Number: ");
                scanf("%d", &search_acc);
                for(int i = 0; i < count; i++) {
                    if(bank[i].acc_no == search_acc) {
                        printf("Enter Deposit Amount: ");
                        scanf("%f", &amount);
                        if(amount > 0) {
                            bank[i].balance += amount;
                            printf("Amount deposited successfully! New Balance: $%.2f\n", bank[i].balance);
                        } else {
                            printf("Invalid deposit amount!\n");
                        }
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Account not found.\n");
            }
        } 
        else if(choice == 3) {
            if(count == 0) {
                printf("No accounts found.\n");
            } else {
                int search_acc, found = 0;
                float amount;
                printf("Enter Account Number: ");
                scanf("%d", &search_acc);
                for(int i = 0; i < count; i++) {
                    if(bank[i].acc_no == search_acc) {
                        printf("Enter Withdrawal Amount: ");
                        scanf("%f", &amount);
                        if(amount > 0 && amount <= bank[i].balance) {
                            bank[i].balance -= amount;
                            printf("Withdrawal successful! Remaining Balance: $%.2f\n", bank[i].balance);
                        } else if(amount > bank[i].balance) {
                            printf("Insufficient funds!\n");
                        } else {
                            printf("Invalid withdrawal amount!\n");
                        }
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Account not found.\n");
            }
        } 
        else if(choice == 4) {
            if(count == 0) {
                printf("No records found.\n");
            } else {
                int search_acc, found = 0;
                printf("Enter Account Number: ");
                scanf("%d", &search_acc);
                for(int i = 0; i < count; i++) {
                    if(bank[i].acc_no == search_acc) {
                        printf("\nAccount Details:\n");
                        printf("Account No : %d\n", bank[i].acc_no);
                        printf("Holder Name: %s\n", bank[i].name);
                        printf("Balance    : $%.2f\n", bank[i].balance);
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Account not found.\n");
            }
        } 
        else if(choice == 5) {
            printf("Exiting bank system. Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid selection! Try again.\n");
        }
    }
    return 0;
}
