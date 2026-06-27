#include <stdio.h>
long long fact(int a) {
    long long b=1;
    for(int c=1;c<=a;c++){
        b*=c;
    }
    return b;
}
int main() {
    int d;
    printf("Enter number: ");
    scanf("%d",&d);
    printf("%lld\n",fact(d));
    return 0;
}
