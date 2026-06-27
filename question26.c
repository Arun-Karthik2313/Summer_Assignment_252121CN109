#include <stdio.h>
int fib(int a) {
    if(a<=0){
        return 0;
    }
    if(a==1){
        return 1;
    }
    return fib(a-1)+fib(a-2);
}
int main() {
    int b;
    printf("Enter terms: ");
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        printf("%d ",fib(i));
    }
    printf("\n");
    return 0;
}
