#include <stdio.h>
int main() {
    int a,b=1;
    printf("Enter size of square matrix: ");
    scanf("%d",&a);
    int c[a][a];
    printf("Enter elements of matrix: \n");
    for(int d=0;d<a;d++){
        for(int e=0;e<a;e++){
            scanf("%d",&c[d][e]);
        }
    }
    for(int d=0;d<a;d++){
        for(int e=0;e<a;e++){
            if(c[d][e]!=c[e][d]){
                b=0;
                break;
            }
        }
        if(!b){
            break;
        }
    }
    if(b){
        printf("Symmetric matrix\n");
    }else{
        printf("Not symmetric matrix\n");
    }
    return 0;
}
