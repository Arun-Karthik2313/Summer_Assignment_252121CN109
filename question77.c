#include <stdio.h>
int main() {
    int a,b,c,d;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d",&a,&b);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d",&c,&d);
    if(b!=c){
        printf("Multiplication not possible\n");
        return 0;
    }
    int e[a][b],f[c][d],g[a][d];
    printf("Enter elements of first matrix: \n");
    for(int h=0;h<a;h++){
        for(int i=0;i<b;i++){
            scanf("%d",&e[h][i]);
        }
    }
    printf("Enter elements of second matrix: \n");
    for(int h=0;h<c;h++){
        for(int i=0;i<d;i++){
            scanf("%d",&f[h][i]);
        }
    }
    for(int h=0;h<a;h++){
        for(int i=0;i<d;i++){
            g[h][i]=0;
            for(int j=0;j<b;j++){
                g[h][i]+=e[h][j]*f[j][i];
            }
        }
    }
    printf("Result matrix: \n");
    for(int h=0;h<a;h++){
        for(int i=0;i<d;i++){
            printf("%d ",g[h][i]);
        }
        printf("\n");
    }
    return 0;
}
