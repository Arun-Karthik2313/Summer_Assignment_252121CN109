#include <stdio.h>
int main() {
    char a[100];
    int b[256]={0};
    printf("Enter string: ");
    scanf("%[^\n]",a);
    for(int c=0;a[c]!='\0';c++){
        b[(unsigned char)a[c]]++;
    }
    for(int c=0;c<256;c++){
        if(b[c]>0){
            printf("%c: %d\n",c,b[c]);
        }
    }
    return 0;
}
