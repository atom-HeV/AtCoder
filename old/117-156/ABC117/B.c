#include <stdio.h>

int main(void){
    int i,n,l[100],max=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&l[i]);
        sum+=l[i];
        if(l[i]>max) max=l[i];
    }
    if(sum-max>max){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}