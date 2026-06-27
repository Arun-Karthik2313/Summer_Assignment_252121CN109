#include <stdio.h>
int main() {
    int a,b;
    printf("Enter sizes: ");
    scanf("%d %d",&a,&b);
    int c[a],d[b],e[a+b];
    printf("Enter first sorted array: ");
    for(int f=0;f<a;f++){
        scanf("%d",&c[f]);
    }
    printf("Enter second sorted array: ");
    for(int f=0;f<b;f++){
        scanf("%d",&d[f]);
    }
    int f=0,g=0,h=0;
    while(f<a&&g<b){
        if(c[f]<d[g]){
            e[h]=c[f];
            f++;
        }else{
            e[h]=d[g];
            g++;
        }
        h++;
    }
    while(f<a){
        e[h]=c[f];
        f++;
        h++;
    }
    while(g<b){
        e[h]=d[g];
        g++;
        h++;
    }
    for(int i=0;i<a+b;i++){
        printf("%d ",e[i]);
    }
    printf("\n");
    return 0;
}
