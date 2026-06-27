#include <stdio.h>
int main() {
    int a;
    printf("Enter rows: ");
    scanf("%d",&a);
    for(int b=1;b<=a;b++){
        for(int c=1;c<=a-b;c++){
            printf(" ");
        }
        for(int d=0;d<b;d++){
            printf("%c",'A'+d);
        }
        for(int e=b-2;e>=0;e--){
            printf("%c",'A'+e);
        }
        printf("\n");
    }
    return 0;
}
