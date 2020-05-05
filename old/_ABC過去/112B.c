#include <stdio.h>

int main(void){
    int i,n,T;
    scanf("%d %d",&n,&T);
    int c,t,min_c=1001;
    for(i=0;i<n;i++){
        scanf("%d %d",&c,&t);
        if(t<=T){
            if(c<min_c) min_c=c;
        }
    }
    if(min_c<1001){
        printf("%d\n", min_c);
    }else{
        printf("TLE\n");
    }
    return 0;
}