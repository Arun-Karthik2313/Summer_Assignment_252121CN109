#include <stdio.h>
#include <string.h>
int main() {
    char a[100],b[100],c[200]="";
    printf("Enter first string: ");
    scanf("%[^\n]",a);
    getchar();
    printf("Enter second string: ");
    scanf("%[^\n]",b);
    int d=strlen(a);
    int e=strlen(b);
    if(d!=e){
        printf("Not rotation\n");
        return 0;
    }
    strcat(c,a);
    strcat(c,a);
    if(strstr(c,b)!=NULL){
        printf("Rotation\n");
    }else{
        printf("Not rotation\n");
    }
    return 0;
}
