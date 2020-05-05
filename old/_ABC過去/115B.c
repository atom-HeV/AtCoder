#include <stdio.h>

int main(void){
    int n,i,max=0,sum=0;
    scanf("%d",&n);
    int p[n];
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
        if(p[i]>max) max=p[i];
        sum+=p[i];
    }
    printf("%d\n", sum-max/2);
    return 0;
}