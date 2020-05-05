#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,i,len,dt;
    scanf("%d",&n);
    int t[n+1],x[n+1],y[n+1];
    t[0]=0;
    x[0]=0;
    y[0]=0;
    for(i=1;i<n+1;i++){
        scanf("%d %d %d", &t[i], &x[i], &y[i]);
    }

    for(i=0;i<n;i++){
        len=abs(x[i+1]-x[i])+abs(y[i+1]-y[i]);
        dt=t[i+1]-t[i];
        if(dt<len||(dt-len)%2){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}