#include <stdio.h>
int main() {
    int a,b;
    printf("Enter sizes of two arrays: ");
    scanf("%d %d",&a,&b);
    int c[a],d[b],e[a+b];
    printf("Enter elements of first array: ");
    for(int f=0;f<a;f++){
        scanf("%d",&c[f]);
        e[f]=c[f];
    }
    printf("Enter elements of second array: ");
    for(int f=0;f<b;f++){
        scanf("%d",&d[f]);
        e[a+f]=d[f];
    }
    for(int f=0;f<a+b;f++){
        printf("%d ",e[f]);
    }
    printf("\n");
    return 0;
}
