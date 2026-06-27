#include <stdio.h>
int main() {
    int a,b;
    printf("Enter rows and columns: ");
    scanf("%d %d",&a,&b);
    int c[a][b],d[a][b],e[a][b];
    printf("Enter elements of first matrix: \n");
    for(int f=0;f<a;f++){
        for(int g=0;g<b;g++){
            scanf("%d",&c[f][g]);
        }
    }
    printf("Enter elements of second matrix: \n");
    for(int f=0;f<a;f++){
        for(int g=0;g<b;g++){
            scanf("%d",&d[f][g]);
            e[f][g]=c[f][g]+d[f][g];
        }
    }
    printf("Result matrix: \n");
    for(int f=0;f<a;f++){
        for(int g=0;g<b;g++){
            printf("%d ",e[f][g]);
        }
        printf("\n");
    }
    return 0;
}
