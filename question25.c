#include <stdio.h>
int fact(int a) {
    if(a<=1){
        return 1;
    }
    return a*fact(a-1);
}
int main() {
    int b;
    printf("Enter number: ");
    scanf("%d",&b);
    printf("%d\n",fact(b));
    return 0;
}
