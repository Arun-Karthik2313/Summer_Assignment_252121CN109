#include <stdio.h>
int main() {
    char a[100],e;
    int b=0,c=0;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    while(a[c]!='\0'){
        c++;
    }
    int d=c-1;
    while(b<d){
        e=a[b];
        a[b]=a[d];
        a[d]=e;
        b++;
        d--;
    }
    printf("%s\n",a);
    return 0;
}
