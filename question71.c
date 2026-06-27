#include <stdio.h>
int main() {
    int a,b,c=0,d,e,f=-1;
    printf("Enter size: ");
    scanf("%d",&a);
    int g[a];
    d=a-1;
    printf("Enter sorted elements: ");
    for(int h=0;h<a;h++){
        scanf("%d",&g[h]);
    }
    printf("Enter element to search: ");
    scanf("%d",&b);
    while(c<=d){
        e=c+(d-c)/2;
        if(g[e]==b){
            f=e;
            break;
        }
        if(g[e]<b){
            c=e+1;
        }else{
            d=e-1;
        }
    }
    if(f!=-1){
        printf("Found at index: %d\n",f);
    }else{
        printf("Not found\n");
    }
    return 0;
}
