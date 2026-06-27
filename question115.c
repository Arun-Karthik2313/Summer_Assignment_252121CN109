#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100];
    int choice;

    while(1) {
        printf("\n--- Menu-Driven String Operations System ---\n");
        printf("1. Copy String (strcpy)\n");
        printf("2. Concatenate Strings (strcat)\n");
        printf("3. Compare Strings (strcmp)\n");
        printf("4. Find String Length (strlen)\n");
        printf("5. Exit\n");
        printf("Enter choice (1-5): ");
        scanf("%d", &choice);
        getchar(); // Clear newline buffer

        if (choice == 5) {
            printf("Exiting system. Goodbye!\n");
            break;
        }

        switch(choice) {
            case 1:
                printf("Enter source string: ");
                scanf("%[^\n]", str2);
                strcpy(str1, str2);
                printf("Copied String: %s\n", str1);
                break;

            case 2:
                printf("Enter first string: ");
                scanf("%[^\n]", str1);
                getchar();
                printf("Enter string to append: ");
                scanf("%[^\n]", str2);
                strcat(str1, str2);
                printf("Concatenated String: %s\n", str1);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%[^\n]", str1);
                getchar();
                printf("Enter second string: ");
                scanf("%[^\n]", str2);
                int cmp = strcmp(str1, str2);
                if (cmp == 0) {
                    printf("Strings are equal.\n");
                } else if (cmp > 0) {
                    printf("First string is greater.\n");
                } else {
                    printf("Second string is greater.\n");
                }
                break;

            case 4:
                printf("Enter string: ");
                scanf("%[^\n]", str1);
                printf("Length of string: %lu\n", strlen(str1));
                break;

            default:
                printf("Invalid selection! Try again.\n");
        }
    }
    return 0;
}
