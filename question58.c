#include <stdio.h>
int main() {
    int a,b,e;
    printf("Enter size and rotations: ");
    scanf("%d %d",&a,&b);
    int c[a];
    printf("Enter elements: ");
    for(int d=0;d<a;d++){
        scanf("%d",&c[d]);
    }
    b=b%a;
    for(int d=0;d<b;d++){
        e=c[0];
        for(int f=0;f<a-1;f++){
            c[f]=c[f+1];
        }
        c[a-1]=e;
    }
    for(int d=0;d<a;d++){
        printf("%d ",c[d]);
    }
    printf("\n");
    return 0;
}
