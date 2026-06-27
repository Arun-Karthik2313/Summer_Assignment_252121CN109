#include <stdio.h>
int main() {
    char a[100];
    int b=0;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    while(a[b]!='\0'){
        b++;
    }
    printf("%d\n",b);
    return 0;
}
