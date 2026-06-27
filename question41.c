#include <stdio.h>
int sum(int a,int b) {
    return a+b;
}
int main() {
    int c,d;
    printf("Enter two numbers: ");
    scanf("%d %d",&c,&d);
    printf("%d\n",sum(c,d));
    return 0;
}
