#include <stdio.h>

int main(void)
{
    int a,b,c,x,i,j,k,count=0;
    scanf("%d%d%d%d",&a,&b,&c,&x);
    for(i=a;i>=0;i--){
        if(500*i<=x){
            for(j=b;j>=0;j--){
                if(500*i+100*j<=x){
                    for(k=c;k>=0;k--){
                        if(500*i+100*j+50*k==x){
                            count++;
                        }
                    }
                }
            }
        }
    }
    printf("%d\n", count);
    return 0;
}