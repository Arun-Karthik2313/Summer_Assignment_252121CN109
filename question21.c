#include <stdio.h>
int main() {
    int a,b=0,c[32];
    printf("Enter decimal number: ");
    scanf("%d",&a);
    if(a==0){
        printf("0\n");
        return 0;
    }
    while(a>0){
        c[b]=a%2;
        a/=2;
        b++;
    }
    for(int d=b-1;d>=0;d--){
        printf("%d",c[d]);
    }
    printf("\n");
    return 0;
}
