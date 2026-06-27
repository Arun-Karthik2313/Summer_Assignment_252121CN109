#include <stdio.h>
int main() {
    char a[100];
    int b[256]={0};
    int c=0,d=0;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    while(a[c]!='\0'){
        if(b[(unsigned char)a[c]]==0){
            b[(unsigned char)a[c]]=1;
            a[d]=a[c];
            d++;
        }
        c++;
    }
    a[d]='\0';
    printf("%s\n",a);
    return 0;
}
