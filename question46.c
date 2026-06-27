#include <stdio.h>
#include <math.h>
int isArm(int a) {
    int b=a,c=a,d=0,e=0,f;
    while(b>0){
        d++;
        b/=10;
    }
    while(c>0){
        f=c%10;
        e+=round(pow(f,d));
        c/=10;
    }
    return e==a;
}
int main() {
    int g;
    printf("Enter number: ");
    scanf("%d",&g);
    if(isArm(g)){
        printf("Armstrong\n");
    }else{
        printf("Not Armstrong\n");
    }
    return 0;
}
