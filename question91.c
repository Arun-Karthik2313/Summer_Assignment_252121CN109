#include <stdio.h>
int main() {
    char a[100],b[100];
    int c[256]={0},d[256]={0},e=1;
    printf("Enter first string: ");
    scanf("%[^\n]",a);
    getchar();
    printf("Enter second string: ");
    scanf("%[^\n]",b);
    for(int f=0;a[f]!='\0';f++){
        c[(unsigned char)a[f]]++;
    }
    for(int f=0;b[f]!='\0';f++){
        d[(unsigned char)b[f]]++;
    }
    for(int f=0;f<256;f++){
        if(c[f]!=d[f]){
            e=0;
            break;
        }
    }
    if(e){
        printf("Anagram\n");
    }else{
        printf("Not Anagram\n");
    }
    return 0;
}
