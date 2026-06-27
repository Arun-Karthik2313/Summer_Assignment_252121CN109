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
    for(int e=0;e<b;e++){
        int f=0;
        for(int d=0;d<a;d++){
            f+=c[d][e];
        }
        printf("Column %d sum: %d\n",e+1,f);
    }
    return 0;
}
