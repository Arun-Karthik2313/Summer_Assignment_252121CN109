#include <stdio.h>
int main() {
    int a,b,g=0;
    printf("Enter sizes of two arrays: ");
    scanf("%d %d",&a,&b);
    int c[a],d[b],e[a+b];
    printf("Enter elements of first array: ");
    for(int f=0;f<a;f++){
        scanf("%d",&c[f]);
        int h=0;
        for(int i=0;i<g;i++){
            if(e[i]==c[f]){
                h=1;
                break;
            }
        }
        if(!h){
            e[g]=c[f];
            g++;
        }
    }
    printf("Enter elements of second array: ");
    for(int f=0;f<b;f++){
        scanf("%d",&d[f]);
        int h=0;
        for(int i=0;i<g;i++){
            if(e[i]==d[f]){
                h=1;
                break;
            }
        }
        if(!h){
            e[g]=d[f];
            g++;
        }
    }
    printf("Union: ");
    for(int f=0;f<g;f++){
        printf("%d ",e[f]);
    }
    printf("\n");
    return 0;
}
