#include <stdio.h>
int main() {
    int a,b;
    printf("Enter sizes of two arrays: ");
    scanf("%d %d",&a,&b);
    int c[a],d[b];
    printf("Enter elements of first array: ");
    for(int e=0;e<a;e++){
        scanf("%d",&c[e]);
    }
    printf("Enter elements of second array: ");
    for(int e=0;e<b;e++){
        scanf("%d",&d[e]);
    }
    printf("Common elements: ");
    for(int e=0;e<a;e++){
        int f=0;
        for(int g=0;g<e;g++){
            if(c[g]==c[e]){
                f=1;
                break;
            }
        }
        if(f){
            continue;
        }
        for(int g=0;g<b;g++){
            if(c[e]==d[g]){
                printf("%d ",c[e]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
