#include <stdio.h>
int main(void){
    int n,i,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        f+=a[i]-1;
    }
    printf("%d\n", f);
    return 0;
}