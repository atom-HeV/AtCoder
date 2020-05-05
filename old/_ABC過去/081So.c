#include <stdio.h>

int main(void)
{
    int n,i,flag=0,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    while(flag == 0){
        for(i=0; i<n; i++){
            if(a[i]%2==0){
                a[i] = a[i] / 2;
            }else{
                flag = 1;
            }
        }
        if(flag==0) count++;
    }
    printf("%d\n", count);
    return 0;
}