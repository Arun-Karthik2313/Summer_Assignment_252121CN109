#include<stdio.h>
int main() {
    int a, n;
    printf("Enter the number you to see the multiplication table :-");
    scanf("%d", &a);
    printf("Enter the No. up to which you want to multiply :-");
    scanf("%d", &n);
        for(int i=0; i<=a ;i++){
    printf("Table is :- %d X %d = %d\n",n,i,n*i);
        }
    return 0;
}