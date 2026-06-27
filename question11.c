#include <stdio.h>
int main(){
int n1,n2,a,b,hcf;
printf("Enter two numbers: ");
scanf("%d %d",&n1,&n2);
a=n1; b=n2;
while(b!=0){
int rem=a%b;
a=b;
b=rem;
}
hcf=a;
printf("HCF of %d and %d = %d\n",n1,n2,hcf);
return 0;
}
