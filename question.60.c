#include <stdio.h>
int main() {
    int a,b=0;
    printf("Enter size: ");
    scanf("%d",&a);
    int c[a];
    printf("Enter elements: ");
    for(int d=0;d<a;d++){
        scanf("%d",&c[d]);
        if(c[d]!=0){
            c[b]=c[d];
            b++;
        }
    }
    while(b<a){
        c[b]=0;
        b++;
    }
    for(int d=0;d<a;d++){
        printf("%d ",c[d]);
    }
    printf("\n");
    return 0;
}
