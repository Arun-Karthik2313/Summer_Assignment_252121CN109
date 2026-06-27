#include <stdio.h>
void fib(int a) {
    int b=0,c=1,d;
    for(int e=0;e<a;e++){
        printf("%d ",b);
        d=b+c;
        b=c;
        c=d;
    }
    printf("\n");
}
int main() {
    int f;
    printf("Enter terms: ");
    scanf("%d",&f);
    fib(f);
    return 0;
}
