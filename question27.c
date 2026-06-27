#include <stdio.h>
int sum(int a) {
    if(a==0){
        return 0;
    }
    return (a%10)+sum(a/10);
}
int main() {
    int b;
    printf("Enter number: ");
    scanf("%d",&b);
    printf("%d\n",sum(b));
    return 0;
}
