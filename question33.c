#include <stdio.h>
int main() {
    int a;
    printf("Enter rows: ");
    scanf("%d",&a);
    for(int b=a;b>=1;b--){
        for(int c=1;c<=b;c++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
