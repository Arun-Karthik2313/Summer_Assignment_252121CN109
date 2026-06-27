#include <stdio.h>
int main() {
    int a;
    printf("Enter size: ");
    scanf("%d",&a);
    for(int b=1;b<=a;b++){
        for(int c=1;c<=a;c++){
            if(b==1||b==a||c==1||c==a){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
