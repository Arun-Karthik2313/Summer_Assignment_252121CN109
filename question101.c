#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int a,b,c=0;
    srand(time(0));
    a=rand()%100+1;
    printf("Guess a number between 1 and 100\n");
    while(1){
        printf("Enter guess: ");
        scanf("%d",&b);
        c++;
        if(b>a){
            printf("Too high\n");
        }else if(b<a){
            printf("Too low\n");
        }else{
            printf("Correct in %d tries\n",c);
            break;
        }
    }
    return 0;
}
