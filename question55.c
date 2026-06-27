#include <stdio.h>
#include <limits.h>
int main() {
    int a;
    printf("Enter size: ");
    scanf("%d",&a);
    int b[a];
    printf("Enter elements: ");
    for(int c=0;c<a;c++){
        scanf("%d",&b[c]);
    }
    int d=INT_MIN;
    int e=INT_MIN;
    for(int c=0;c<a;c++){
        if(b[c]>d){
            e=d;
            d=b[c];
        }else if(b[c]>e&&b[c]!=d){
            e=b[c];
        }
    }
    if(e==INT_MIN){
        printf("No second largest\n");
    }else{
        printf("Second largest: %d\n",e);
    }
    return 0;
}
