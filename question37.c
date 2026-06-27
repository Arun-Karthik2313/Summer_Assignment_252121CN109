#include <stdio.h>
int main() {
    int a;
    printf("Enter rows: ");
    scanf("%d",&a);
    for(int b=1;b<=a;b++){
        for(int c=1;c<=a-b;c++){
            printf(" ");
        }
        for(int d=1;d<=(2*b-1);d++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
