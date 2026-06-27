#include <stdio.h>
int main() {
    long long a,b=2,c=0;
    printf("Enter number: ");
    scanf("%lld",&a);
    while(a>1){
        if(a%b==0){
            c=b;
            a/=b;
        }else{
            b++;
        }
    }
    printf("%lld\n",c);
    return 0;
}
