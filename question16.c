#include <stdio.h>
#include <math.h>
int main() {
    int start,end,i,temp,rem,total,digits;
    printf("Enter range: ");
    scanf("%d %d",&start,&end);
    for(i=start;i<=end;i++){
        temp=i;
        digits=0;
        while(temp!=0){
            digits++;
            temp/=10;
        }
        temp=i;
        total=0;
        while(temp!=0){
            rem=temp%10;
            total+=round(pow(rem,digits));
            temp/=10;
        }
        if(total==i){
            printf("%d\n",i);
        }
    }
    return 0;
}
