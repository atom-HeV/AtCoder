#include <stdio.h>
#include <stdlib.h>

int asc(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(void){
    int n,k,min=2000000000,sa;
    int i;
    scanf("%d %d",&n,&k);
    int h[n];
    for(i=0;i<n;i++){
        scanf("%d", &h[i]);
    }
    qsort(h, n, sizeof(int), asc);

    for(i=0;i<=n-k;i++){
        sa=h[i+k-1]-h[i];
        if(sa<min){
            min=sa;
        }
    }
    printf("%d\n", min);
    return 0;
}