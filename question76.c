#include <stdio.h>
int main() {
    int a,b=0;
    printf("Enter size of square matrix: ");
    scanf("%d",&a);
    int c[a][a];
    printf("Enter elements of matrix: \n");
    for(int d=0;d<a;d++){
        for(int e=0;e<a;e++){
            scanf("%d",&c[d][e]);
            if(d==e){
                b+=c[d][e];
            }
        }
    }
    printf("Diagonal sum: %d\n",b);
    return 0;
}
