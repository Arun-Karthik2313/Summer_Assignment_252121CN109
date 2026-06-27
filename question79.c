#include <stdio.h>
int main() {
    int a,b;
    printf("Enter rows and columns: ");
    scanf("%d %d",&a,&b);
    int c[a][b];
    printf("Enter elements of matrix: \n");
    for(int d=0;d<a;d++){
        for(int e=0;e<b;e++){
            scanf("%d",&c[d][e]);
        }
    }
    for(int d=0;d<a;d++){
        int f=0;
        for(int e=0;e<b;e++){
            f+=c[d][e];
        }
        printf("Row %d sum: %d\n",d+1,f);
    }
    return 0;
}
