#include <stdio.h>
int main() {
    int a,d,e;
    printf("Enter size: ");
    scanf("%d",&a);
    int b[a];
    printf("Enter elements: ");
    for(int c=0;c<a;c++){
        scanf("%d",&b[c]);
    }
    for(int c=0;c<a-1;c++){
        d=c;
        for(int f=c+1;f<a;f++){
            if(b[f]<b[d]){
                d=f;
            }
        }
        e=b[d];
        b[d]=b[c];
        b[c]=e;
    }
    for(int c=0;c<a;c++){
        printf("%d ",b[c]);
    }
    printf("\n");
    return 0;
}
