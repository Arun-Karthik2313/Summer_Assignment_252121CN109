#include <stdio.h>
int main() {
    char a[100];
    int b=0,c=0,d=0;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    while(a[d]!='\0'){
        char e=a[d];
        if((e>='a'&&e<='z')||(e>='A'&&e<='Z')){
            if(e=='a'||e=='e'||e=='i'||e=='o'||e=='u'||e=='A'||e=='E'||e=='I'||e=='O'||e=='U'){
                b++;
            }else{
                c++;
            }
        }
        d++;
    }
    printf("Vowels: %d\n",b);
    printf("Consonants: %d\n",c);
    return 0;
}
