#include <stdio.h>
int main() {
    int start,end,count=0;
    printf("Enter the start of range : ");
    scanf("%d", &start);
    printf("Enter the end of range : ");
    scanf("%d", &end);
    for (int i = start; i<=end; i++){
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i%j==0)
            {
                count+=1;
            }
            
        }  
          if (count==2)
        {
            printf("%d /",i);
        }
    }
    return 0;
    }    
