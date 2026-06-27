#include <stdio.h>
int main() {
    int a,b,c,d,e=0;
    printf("Enter number: ");
    scanf("%d",&a);
    b=a;
    while(b>0){
        c=b%10;
        d=1;
        for(int i=1;i<=c;i++){
            d*=i;
        }
        e+=d;
        b/=10;
    }
    if(e==a){
        printf("Strong number\n");
    }else{
        printf("Not strong number\n");
    }
    return 0;
}
