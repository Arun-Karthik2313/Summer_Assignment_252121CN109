#include <stdio.h>
int main() {
    int n,product=1,temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp=n;
    while(n!=0){
        temp=n%10;
        product*=temp;
        n=n/10;
    }
    printf("The Product of Digits of Number is:- %d",product);
    return 0;
}
