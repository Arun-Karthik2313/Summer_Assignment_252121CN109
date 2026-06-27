#include <stdio.h>
int main() {
    char a[100];
    int b=0,c=0;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    while(a[b]!='\0'){
        if(a[b]!=' '){
            a[c]=a[b];
            c++;
        }
        b++;
    }
    a[c]='\0';
    printf("%s\n",a);
    return 0;
}
