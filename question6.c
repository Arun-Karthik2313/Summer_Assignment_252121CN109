#include <stdio.h>
int main() {
    int n,temp,reverse=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp=n;
    while(n!=0){
        temp=n%10;
        reverse=reverse*10+temp;
        n=n/10;
    }
    printf("The Reverse no. is :- %d",reverse);
    return 0;
}
