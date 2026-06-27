#include <stdio.h>
#include <string.h>
int main() {
    int a;
    printf("Enter number of names: ");
    scanf("%d",&a);
    char b[a][100],e[100];
    printf("Enter names:\n");
    for(int c=0;c<a;c++){
        scanf("%s",b[c]);
    }
    for(int c=0;c<a-1;c++){
        for(int d=0;d<a-c-1;d++){
            if(strcmp(b[d],b[d+1])>0){
                strcpy(e,b[d]);
                strcpy(b[d],b[d+1]);
                strcpy(b[d+1],e);
            }
        }
    }
    printf("Sorted names:\n");
    for(int c=0;c<a;c++){
        printf("%s\n",b[c]);
    }
    return 0;
}
