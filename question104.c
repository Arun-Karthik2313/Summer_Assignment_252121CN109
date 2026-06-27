#include <stdio.h>
int main() {
    int a,b=0;
    printf("--- Welcome to the Quiz ---\n");
    printf("\nQ1. What is the size of int data type in C?\n");
    printf("1. 2 or 4 Bytes\n2. 1 Byte\n3. 8 Bytes\n4. 16 Bytes\n");
    printf("Enter choice (1-4): ");
    scanf("%d",&a);
    if(a==1){
        printf("Correct!\n");
        b++;
    }else{
        printf("Wrong answer.\n");
    }
    printf("\nQ2. Which keyword is used to prevent modification of a variable?\n");
    printf("1. static\n2. volatile\n3. const\n4. register\n");
    printf("Enter choice (1-4): ");
    scanf("%d",&a);
    if(a==3){
        printf("Correct!\n");
        b++;
    }else{
        printf("Wrong answer.\n");
    }
    printf("\nQ3. Which of the following is an array index tool?\n");
    printf("1. Pointer\n2. Function\n3. Loop counter\n4. Structure\n");
    printf("Enter choice (1-4): ");
    scanf("%d",&a);
    if(a==3){
        printf("Correct!\n");
        b++;
    }else{
        printf("Wrong answer.\n");
    }
    printf("\nYour total score: %d/3\n",b);
    return 0;
}
