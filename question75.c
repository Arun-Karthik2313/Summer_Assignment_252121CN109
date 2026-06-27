#include <stdio.h>
int main() {
    int a,b;
    printf("Enter rows and columns: ");
    scanf("%d %d",&a,&b);
    int c[a][b],d[b][a];
    printf("Enter elements of matrix: \n");
    for(int f=0;f<a;f++){
        for(int g=0;g<b;g++){
            scanf("%d",&c[f][g]);
            d[g][f]=c[f][g];
        }
    }
    printf("Transpose matrix: \n");
    for(int f=0;f<b;f++){
        for(int g=0;g<a;g++){
            printf("%d ",d[f][g]);
        }
        printf("\n");
    }
    return 0;
}
