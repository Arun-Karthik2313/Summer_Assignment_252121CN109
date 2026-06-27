#include <stdio.h>
int main() {
    char a[100];
    int b=0;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    while(a[b]!='\0'){
        int c=1;
        while(a[b]==a[b+c]){
            c++;
        }
        printf("%c%d",a[b],c);
        b+=c;
    }
    printf("\n");
    return 0;
}
