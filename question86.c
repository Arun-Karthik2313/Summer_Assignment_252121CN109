#include <stdio.h>
int main() {
    char a[1000];
    int b=0,c=0,d=0;
    printf("Enter sentence: ");
    scanf("%[^\n]",a);
    while(a[b]!='\0'){
        if(a[b]!=' '&&a[b]!='\t'&&a[b]!='\n'){
            if(d==0){
                c++;
                d=1;
            }
        }else{
            d=0;
        }
        b++;
    }
    printf("%d\n",c);
    return 0;
}
