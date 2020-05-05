#include <stdio.h>

int check753(int s){
    int n,seven=0,five=0,three=0;
    while(seven==0||five==0||three==0){
        if(s==0) return 0;
        n=s%10;
        s/=10;
        if(n==7){
            seven=1;
        }else if(n==5){
            five=1;
        }else if(n==3){
            three=1;
        }
    }
    return 1;
}

int count753(int n,int s){
    if(s>n) return 0;
    int ret;
    if(check753(s)){
        ret=1;
    }else{
        ret=0;
    }
    if(s*10+3>0){
        ret+=count753(n,s*10+3);
    }
    if(s*10+5>0){
        ret+=count753(n,s*10+5);
    }
    if(s*10+7>0){
        ret+=count753(n,s*10+7);
    }
    return ret;
}

int main(void){
    int n;
    scanf("%d",&n);
    printf("%d\n", count753(n,0));
    return 0;
}