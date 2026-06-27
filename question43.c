#include <stdio.h>
int isPrime(int a) {
    if(a<=1){
        return 0;
    }
    for(int b=2;b*b<=a;b++){
        if(a%b==0){
            return 0;
        }
    }
    return 1;
}
int main() {
    int c;
    printf("Enter number: ");
    scanf("%d",&c);
    if(isPrime(c)){
        printf("Prime\n");
    }else{
        printf("Not Prime\n");
    }
    return 0;
}
