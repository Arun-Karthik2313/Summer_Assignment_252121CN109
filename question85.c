#include <stdio.h>
int main() {
    char a[100];
    int b=0,c=0,d=1;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    while(a[c]!='\0'){
        c++;
    }
    int e=c-1;
    while(b<e){
        if(a[b]!=a[e]){
            d=0;
            break;
        }
        b++;
        e--;
    }
    if(d){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }
    return 0;
}
