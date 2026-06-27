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
    printf("Duplicate elements: ");
    for(int c=0;c<a;c++){
        for(int d=c+1;d<a;d++){
            if(b[c]==b[d]){
                int e=0;
                for(int f=0;f<c;f++){
                    if(b[f]==b[c]){
                        e=1;
                        break;
                    }
                }
                if(!e){
                    printf("%d ",b[c]);
                }
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
