#include <stdio.h>
int main() {
    int a=1,b,c;
    float d=10000.0;
    while(a){
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nEnter choice: ");
        scanf("%d",&b);
        switch(b){
            case 1:
                printf("Balance: $%.2f\n",d);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%d",&c);
                if(c>0){
                    d+=c;
                    printf("Deposited successfully\n");
                }else{
                    printf("Invalid amount\n");
                }
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%d",&c);
                if(c>0&&c<=d){
                    d-=c;
                    printf("Please collect your cash\n");
                }else if(c>d){
                    printf("Insufficient balance\n");
                }else{
                    printf("Invalid amount\n");
                }
                break;
            case 4:
                a=0;
                printf("Thank you for using our ATM\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
