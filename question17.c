#include <stdio.h>
int main() {
    int num,i,total=0;
    printf("Enter number: ");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        if(num%i==0){
            total+=i;
        }
     }
    if(total==num){
        printf("Perfect number\n");
    }else{
        printf("Not perfect number\n");
    }
    return 0;
}
