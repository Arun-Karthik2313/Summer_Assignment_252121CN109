#include <stdio.h>
int main() {
    int a;
    printf("Enter size: ");
    scanf("%d",&a);
    int b[a];
    int c=0;
    float d;
    printf("Enter elements: ");
    for(int e=0;e<a;e++){
        scanf("%d",&b[e]);
        c+=b[e];
    }
    d=(float)c/a;
    printf("Sum: %d\n",c);
    printf("Average: %.2f\n",d);
    return 0;
}
