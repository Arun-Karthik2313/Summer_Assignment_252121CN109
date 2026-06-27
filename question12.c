#include <stdio.h>
int main(){
int n1,n2,a,b,hcf,lcm;
printf("Enter two numbers: ");
scanf("%d %d",&n1,&n2);
a=n1; b=n2;
while(b!=0){
int rem=a%b;
a=b;
b=rem;
}
hcf=a;
lcm=(n1/hcf)*n2;
printf("LCM of %d and %d = %d\n",n1,n2,lcm);
return 0;
}
