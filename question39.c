#include <stdio.h>
int main() {
    int a;
    printf("Enter rows: ");
    scanf("%d",&a);
    for(int b=1;b<=a;b++){
        for(int c=1;c<=a-b;c++){
            printf(" ");
        }
        for(int d=1;d<=b;d++){
            printf("%d",d);
        }
        for(int e=b-1;e>=1;e--){
            printf("%d",e);
        }
        printf("\n");
    }
    return 0;
}
