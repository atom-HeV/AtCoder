#include <stdio.h>

int main(void){
    int d,i;
    scanf("%d",&d);
    printf("Christmas");
    for(i=0;i<25-d;i++){
        printf(" Eve");
    }
    printf("\n");
    return 0;
}