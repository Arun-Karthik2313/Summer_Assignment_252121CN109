#include <stdio.h>
int isPerfect(int a) {
    int b=0;
    for(int c=1;c<a;c++){
        if(a%c==0){
            b+=c;
        }
    }
    return b==a;
}
int main() {
    int d;
    printf("Enter number: ");
    scanf("%d",&d);
    if(isPerfect(d)){
        printf("Perfect number\n");
    }else{
        printf("Not perfect number\n");
    }
    return 0;
}
