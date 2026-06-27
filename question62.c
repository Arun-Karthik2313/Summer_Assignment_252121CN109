#include <stdio.h>
int main() {
    int a;
    printf("Enter size: ");
    scanf("%d",&a);
    int b[a];
    printf("Enter elements: ");
    for(int c=0;c<a;c++){
        scanf("%d",&b[c]);
    }
    int d=0,e=b[0];
    for(int c=0;c<a;c++){
        int f=0;
        for(int g=0;g<a;g++){
            if(b[c]==b[g]){
                f++;
            }
        }
        if(f>d){
            d=f;
            e=b[c];
        }
    }
    printf("Max frequency element: %d\n",e);
    return 0;
}
