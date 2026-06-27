#include <stdio.h>
int main() {
    int a;
    printf("Enter rows: ");
    scanf("%d",&a);
    for(int b=0;b<a;b++){
        for(int c=0;c<=b;c++){
            printf("%c ",'A'+b);
        }
        printf("\n");
    }
    return 0;
}
