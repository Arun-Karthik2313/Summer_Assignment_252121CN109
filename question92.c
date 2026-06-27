#include <stdio.h>
int main() {
    char a[100];
    int b[256]={0},c=0;
    char d;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    for(int e=0;a[e]!='\0';e++){
        b[(unsigned char)a[e]]++;
    }
    for(int e=0;e<256;e++){
        if(b[e]>c){
            c=b[e];
            d=(char)e;
        }
    }
    printf("%c\n",d);
    return 0;
}
