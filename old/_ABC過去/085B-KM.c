#include <stdio.h>

int main(void){
    int n,i,j,stage=1;
    scanf("%d",&n);

    int d[n];
    for(i=0;i<n;i++){
        scanf("%d",&d[i]);
        if(i>0) for(j=0;j<i;j++){
            if(d[i]==d[j]) break;
            if((j+1)==i) stage++;
        }
    }
    printf("%d\n", stage);
    return 0;
}