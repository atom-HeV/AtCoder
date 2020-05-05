#include <stdio.h>

int sumDigit(int n);

int main(void){
    int n,a,b,i,sum=0,sumd;
    scanf("%d %d %d",&n,&a,&b);
    for(i=1;i<=n;i++){
        sumd=sumDigit(i);
        if(sumd>=a && sumd<=b){
            sum+=i;
        }
    }
    printf("%d\n", sum);
    return 0;
}

int sumDigit(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}