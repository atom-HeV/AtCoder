#include <stdio.h>

unsigned long long x=0,p=0;

void eat(int thing){
    x--;
    if(thing){
        p++;
    }
    if(x==0){
        printf("%I64d\n", p);
    }
}

void barger(int l){
    if(l==0){
        p++;
        x--;
        return;
    }
    x--;
    barger(l-1);
    p++;
    x--;
    barger(l-1);
    x--;
}

int main(void){
    int n;
    scanf("%d %I64d",&n,&x);
    barger(n);

    return 0;
}