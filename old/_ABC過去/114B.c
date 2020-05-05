#include <stdio.h>
#include <stdlib.h>

int main(void){
    char s[10];
    int min=1000,x,i=0,j;
    scanf("%s",s);
    while(s[i+2]!='\0'){
        x=0;
        for(j=0;j<3;j++){
            x=x*10+s[i+j]-'0';
        }
        if(min>abs(x-753)){
            min=abs(x-753);
        }
        i++;
    }
    printf("%d\n", min);
    return 0;
}