#include <stdio.h>
int isPal(int a) {
    int b=a,c=0,d;
    while(b>0){
        d=b%10;
        c=c*10+d;
        b/=10;
    }
    return c==a;
}
int main() {
    int e;
    printf("Enter number: ");
    scanf("%d",&e);
    if(isPal(e)){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }
    return 0;
}
