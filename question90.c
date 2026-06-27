#include <stdio.h>
int main() {
    char a[100];
    int b[256]={0};
    printf("Enter string: ");
    scanf("%[^\n]",a);
    int d=0;
    for(int c=0;a[c]!='\0';c++){
        if(b[(unsigned char)a[c]]==1){
            printf("%c\n",a[c]);
            d=1;
            break;
        }
        b[(unsigned char)a[c]]++;
    }
    if(!d){
        printf("None\n");
    }
    return 0;
}
