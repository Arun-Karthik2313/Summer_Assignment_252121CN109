#include <stdio.h>
int main() {
    int a;
    printf("Enter size: ");
    scanf("%d",&a);
    int b[a];
    int c=0,d=0;
    printf("Enter elements: ");
    for(int e=0;e<a;e++){
        scanf("%d",&b[e]);
        if(b[e]%2==0){
            c++;
        }else{
            d++;
        }
    }
    printf("Even: %d\n",c);
    printf("Odd: %d\n",d);
    return 0;
}
