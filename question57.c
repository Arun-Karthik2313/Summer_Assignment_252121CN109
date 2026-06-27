#include <stdio.h>
int main() {
    int a,e;
    printf("Enter size: ");
    scanf("%d",&a);
    int b[a];
    printf("Enter elements: ");
    for(int c=0;c<a;c++){
        scanf("%d",&b[c]);
    }
    for(int c=0,d=a-1;c<d;c++,d--){
        e=b[c];
        b[c]=b[d];
        b[d]=e;
    }
    for(int c=0;c<a;c++){
        printf("%d ",b[c]);
    }
    printf("\n");
    return 0;
}
