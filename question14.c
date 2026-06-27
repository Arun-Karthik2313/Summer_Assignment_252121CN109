#include <stdio.h>
int main(){
int n,term1=0,term2=1,temp;
printf("Enter the term number: ");
scanf("%d",&n);
if(n==1){
printf("The 1st term is: %d\n",term1);
return 0;
}
for(int i=2;i<=n;i++){
temp=term1+term2;
term1=term2;
term2=temp;
}
printf("The %dth term is: %d\n",n,term1);
return 0;
}
