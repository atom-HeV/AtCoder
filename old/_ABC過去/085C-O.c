#include <stdio.h>

int main(void){
    int n,y,i,j,k;
    scanf("%d %d",&n,&y);
    y/=1000;
    for(i=0;i<=n;i++){
        for(j=0;j<=n-i;j++){
            k=n-i-j;
            if(10*i+5*j+k==y){
                printf("%d %d %d\n", i,j,k);
                return 0;
            }
        }
    }
    printf("-1 -1 -1\n");
    return 0;
}