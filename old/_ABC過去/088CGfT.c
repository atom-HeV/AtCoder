#include <stdio.h>

#define RANGE 101

void sort(int a[],int n){
    int i,bucket[RANGE]={0};
    for(i=0;i<n;i++){
        bucket[a[i]]++;
    }
    int target=100;
    for(i=0;i<n;i++){
        while(bucket[target]==0){
            target--;
        }
        a[i]=target;
        bucket[target]--;
    }
}

int main(void){
    int n,i,alice=0;
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    sort(a,n);
    for(i=0;i<n;i++){
        if(i%2==0){
            alice+=a[i];
        }else{
            alice-=a[i];
        }
    }
    printf("%d\n", alice);
    return 0;
}