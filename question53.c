#include <stdio.h>
int main() {
    int a,b,c=-1;
    printf("Enter size: ");
    scanf("%d",&a);
    int d[a];
    printf("Enter elements: ");
    for(int e=0;e<a;e++){
        scanf("%d",&d[e]);
    }
    printf("Enter element to search: ");
    scanf("%d",&b);
    for(int e=0;e<a;e++){
        if(d[e]==b){
            c=e;
            break;
        }
    }
    if(c!=-1){
        printf("Found at index: %d\n",c);
    }else{
        printf("Not found\n");
    }
    return 0;
}
