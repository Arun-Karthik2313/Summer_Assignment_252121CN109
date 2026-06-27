#include <stdio.h>
int main() {
    int a,b=0,c=1,d;
    printf("Enter binary number: ");
    scanf("%d",&a);
    while(a>0){
        d=a%10;
        b+=d*c;
        c*=2;
        a/=10;
    }
    printf("%d\n",b);
    return 0;
}
