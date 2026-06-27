#include <stdio.h>
int main() {
    int a;
    printf("Enter size: ");
    scanf("%d",&a);
    int b[a];
    printf("Enter elements: ");
    for(int c=0;c<a;c++){
        scanf("%d",&b[c]);
    }
    int d=b[0];
    int e=b[0];
    for(int c=1;c<a;c++){
        if(b[c]>d){
            d=b[c];
        }
        if(b[c]<e){
            e=b[c];
        }
    }
    printf("Largest: %d\n",d);
    printf("Smallest: %d\n",e);
    return 0;
}
