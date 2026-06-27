#include <stdio.h>
int max(int a,int b) {
    if(a>b){
        return a;
    }
    return b;
}
int main() {
    int c,d;
    printf("Enter two numbers: ");
    scanf("%d %d",&c,&d);
    printf("%d\n",max(c,d));
    return 0;
}
