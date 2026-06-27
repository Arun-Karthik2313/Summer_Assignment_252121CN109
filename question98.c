#include <stdio.h>
int main() {
    char a[100],b[100];
    int c[256]={0},d[256]={0};
    printf("Enter first string: ");
    scanf("%[^\n]",a);
    getchar();
    printf("Enter second string: ");
    scanf("%[^\n]",b);
    for(int e=0;a[e]!='\0';e++){
        c[(unsigned char)a[e]]=1;
    }
    for(int e=0;b[e]!='\0';e++){
        d[(unsigned char)b[e]]=1;
    }
    printf("Common characters: ");
    for(int e=0;e<256;e++){
        if(c[e]&&d[e]){
            printf("%c",e);
        }
    }
    printf("\n");
    return 0;
}
