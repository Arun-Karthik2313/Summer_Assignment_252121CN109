#include<stdio.h>
int main() {
    int n,fact=1;
    printf("Enter the number upto which you want see the factorial:-");
    scanf("%d", &n);
    if (n==0){
        printf("The factorial is:-%d",1);
    }
    else{
     for(int i=1; i<=n ;i++){
        fact=fact*i;
     }
     printf("The factorial is:-%d",fact);
    }
    return 0;
}