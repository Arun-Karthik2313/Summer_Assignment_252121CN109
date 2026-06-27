#include <stdio.h>
int rev(int a,int b) {
    if(a==0){
        return b;
    }
    return rev(a/10,b*10+a%10);
}
int main() {
    int c;
    printf("Enter number: ");
    scanf("%d",&c);
    printf("%d\n",rev(c,0));
    return 0;
}
