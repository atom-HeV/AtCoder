#include <stdio.h>
#include <stdlib.h>

int asc(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(void){
    int i,n,m,sum=0;
    scanf("%d %d",&n, &m);
    int x[m];
    for(i=0;i<m;i++){
        scanf("%d",&x[i]);
    }

    if(n>=m){
        printf("0\n");
        return 0;
    }

    qsort(x,m,sizeof(int),asc);

    int dif[m-1];
    for(i=0;i<m-1;i++){
        dif[i]=x[i+1]-x[i];
    }

    qsort(dif,m-1,sizeof(int),asc);

    for(i=0;i<m-n;i++){
        sum += dif[i];
    }
    printf("%d\n", sum);
    return 0;
}