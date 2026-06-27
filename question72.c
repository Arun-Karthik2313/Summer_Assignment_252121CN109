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
    for(int c=0;c<a-1;c++){
        for(int d=0;d<a-c-1;d++){
            if(b[d]<b[d+1]){
                e=b[d];
                b[d]=b[d+1];
                b[d+1]=e;
            }
        }
    }
    for(int c=0;c<a;c++){
        printf("%d ",b[c]);
    }
    printf("\n");
    return 0;
}
