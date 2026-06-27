#include<stdio.h>
int main() {
    int sum=0 , n;
    printf("Enter the No. up to which you what add");
    scanf("%d", &n);
    for(int i=0; i<=n ;i++){
    sum+=i;
    }
        printf("Sum is :-%d",sum);
    return 0;
}