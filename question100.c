#include <stdio.h>
#include <string.h>
int main() {
    int a;
    printf("Enter number of words: ");
    scanf("%d",&a);
    char b[a][50],e[50];
    printf("Enter words:\n");
    for(int c=0;c<a;c++){
        scanf("%s",b[c]);
    }
    for(int c=0;c<a-1;c++){
        for(int d=0;d<a-c-1;d++){
            if(strlen(b[d])>strlen(b[d+1])){
                strcpy(e,b[d]);
                strcpy(b[d],b[d+1]);
                strcpy(b[d+1],e);
            }
        }
    }
    printf("Sorted words:\n");
    for(int c=0;c<a;c++){
        printf("%s\n",b[c]);
    }
    return 0;
}
