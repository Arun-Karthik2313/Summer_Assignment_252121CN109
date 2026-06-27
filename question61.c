#include <stdio.h>
int main() {
    int a,b=0,c=0,d;
    printf("Enter total elements including missing: ");
    scanf("%d",&a);
    b=a*(a+1)/2;
    printf("Enter %d elements: ",a-1);
    for(int e=0;e<a-1;e++){
        scanf("%d",&d);
        c+=d;
    }
    printf("Missing number: %d\n",b-c);
    return 0;
}
