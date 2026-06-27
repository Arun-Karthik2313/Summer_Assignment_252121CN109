#include <stdio.h>
int main() {
    int n,sum=0,temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp=n;
    while(n!=0){
        temp=n%10;
        sum+=temp;
        n=n/10;
    }
    printf("The Sum of Digits of Number is:- %d",sum);
    return 0;
}
