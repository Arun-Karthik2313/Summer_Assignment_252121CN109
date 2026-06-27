#include <stdio.h>
int main() {
    int a,b;
    long long c=1;
    printf("Enter base and exponent: ");
    scanf("%d %d",&a,&b);
    for(int d=0;d<b;d++){
        c*=a;
    }
    printf("%lld\n",c);
    return 0;
}
