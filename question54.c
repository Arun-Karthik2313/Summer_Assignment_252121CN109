#include <stdio.h>
int main() {
    int a,b,c=0;
    printf("Enter size: ");
    scanf("%d",&a);
    int d[a];
    printf("Enter elements: ");
    for(int e=0;e<a;e++){
        scanf("%d",&d[e]);
    }
    printf("Enter element to find frequency: ");
    scanf("%d",&b);
    for(int e=0;e<a;e++){
        if(d[e]==b){
            c++;
        }
    }
    printf("Frequency: %d\n",c);
    return 0;
}
