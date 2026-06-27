#include <stdio.h>
int main() {
    char a[1000],b[1000];
    int c=0,d=0,e=0;
    printf("Enter sentence: ");
    scanf("%[^\n]",a);
    while(a[c]!='\0'){
        if(a[c]!=' '&&a[c]!='\t'&&a[c]!='\n'){
            int f=0;
            while(a[c]!='\0'&&a[c]!=' '&&a[c]!='\t'&&a[c]!='\n'){
                b[f]=a[c];
                f++;
                c++;
            }
            b[f]='\0';
            if(f>d){
                d=f;
                e=c-f;
            }
        }else{
            c++;
        }
    }
    for(int f=0;f<d;f++){
        printf("%c",a[e+f]);
    }
    printf("\n");
    return 0;
}
