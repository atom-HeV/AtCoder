#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    int p;
    int year;
    int rank;
} city;

void bsort_year(city data[], int n){
    int i,flag = 1;
    city temp;
    while(flag){
        flag=0;
        for(i=0;i<n-1;i++){
            if(data[i].year>data[i+1].year){
                flag=1;
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }
    }
}

void bsort_num(city data[], int n){
    int i,flag = 1;
    city temp;
    while(flag){
        flag=0;
        for(i=0;i<n-1;i++){
            if(data[i].num>data[i+1].num){
                flag=1;
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }
    }
}

int main(void){
    int n,m,i,count[1000001]={0};
    scanf("%d %d",&n,&m);
    city data[m];
    for(i=0;i<m;i++){
        data[i].num=i;
        scanf("%d %d",&data[i].p, &data[i].year);
    }
    bsort_year(data, m);
    for(i=0;i<m;i++){
        data[i].rank=(count[data[i].p]++)+1;
    }
    bsort_num(data, m);
    for(i=0;i<m;i++){
        printf("%012d\n", 1000000*data[i].p+data[i].rank);
    }
    return 0;
}