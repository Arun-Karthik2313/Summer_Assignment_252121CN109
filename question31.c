#include <stdio.h>
int main() {
    int a;
    printf("Enter rows: ");
    scanf("%d",&a);
    for(int b=1;b<=a;b++){
        for(int c=0;c<b;c++){
            printf("%c ",'A'+c);
        }
        printf("\n");
    }
    return 0;
}
