#include <stdio.h>
int main() {
    int a;
    printf("Enter age: ");
    scanf("%d",&a);
    if(a>=18){
        printf("Eligible to vote\n");
    }else{
        printf("Not eligible to vote. Wait %d more years\n",18-a);
    }
    return 0;
}
