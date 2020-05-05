#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,k,n,H;
    scanf("%d",&n);
    int x[n],y[n],h[n];
    for(i=0;i<n;i++){
        scanf("%d %d %d",&x[i],&y[i],&h[i]);
    }
    for(i=0;i<=100;i++){
        for(j=0;j<=100;j++){
            H=h[0]+abs(x[0]-i)+abs(y[0]-j);
            if(H>0){
                for(k=1;k<n;k++){
                    if(H!=h[k]+abs(x[k]-i)+abs(y[k]-j)){
                        H=0;
                        break;
                    }
                }
                if(H>0){
                    printf("%d %d %d\n", i,j,H);
                }
            }
        }
    }
    return 0;
}