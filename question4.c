#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n == 0) {
        count = 1;
 } else {
    while (n != 0) {
     count += 1; 
      n = n / 10;    
}
}    
printf("The no. of digits is=%d\n",count);
 return 0;
}
