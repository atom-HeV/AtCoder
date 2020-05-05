#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    long i,j,k;
    scanf("%d %ld",&n,&k);
    long a[n];

    int keta = (int)(log2l(k))+1,bit[keta];
    for(i=0;i<keta;i++){
        bit[i]= 0;
    }

    for(i=0;i<n;i++){
        scanf("%ld",&a[i]);
        for(j=0;j<keta;j++){
            bit[j] += a[i] & 1;
            a[i]  = a[i]/2;
        }
    }

    for(i=0;i<keta;i++){
        if(bit[i]>=n/2){
            ans+=powl()
        }
        printf("%ld:%d\n",i, bit[i]);
    }
    return 0;
}