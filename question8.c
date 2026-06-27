#include <stdio.h>
int main() {
    int n,reverse=0,temp1,temp2;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp1=n;
    temp2=n;
    while(n!=0){
        temp1=n%10;
        reverse=reverse*10+temp1;
        n=n/10;
    }
    if (reverse==temp2)
    {
        printf("The number is Palindrome");
    }
    else{
        printf("The number is not Palindrome");
    }    return 0;
}
