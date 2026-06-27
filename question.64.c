#include <stdio.h>
int main() {
    int a,b,c=0;
    printf("Enter size: ");
    scanf("%d",&a);
    int d[a];
    printf("Enter elements: ");
    for(int e=0;e<a;e++){
        scanf("%d",&d[e]);
    }
    printf("Enter target sum: ");
    scanf("%d",&b);
    for(int e=0;e<a;e++){
        for(int f=e+1;f<a;f++){
            if(d[e]+d[f]==b){
                printf("Pair found: %d and %d\n",d[e],d[f]);
                c=1;
            }
        }
    }
    if(!c){
        printf("No pair found\n");
    }
    return 0;
}
