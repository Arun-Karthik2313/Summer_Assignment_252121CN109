#include <stdio.h>
int main() {
    int a,b=0;
    printf("Enter number: ");
    scanf("%d",&a);
    while(a>0){
        b+=a&1;
        a>>=1;
    }
    printf("%d\n",b);
    return 0;
}
