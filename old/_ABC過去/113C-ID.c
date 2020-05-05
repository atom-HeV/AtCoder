#include <stdio.h>
#include <stdlib.h>



typedef struct {
    int num;
    int p;
    int year;
    int rank;
} city;

city temp[100000];

int cmp_year(const void *p, const void *q){
    return ((city*)p)->year - ((city*)q)->year;
}

int cmp_num(const void *p, const void *q){
    return ((city*)p)->num - ((city*)q)->num;
}

/*int cmp_p(const void *p, const void *q){
    return ((city*)p)->p - ((city*)q)->p;
}*/

/*void msort(city data[],int left,int right){
    int mid,i,j,k;
    if(left>=right){
        return;
    }
    mid=(left+right)/2;
    msort(data,left,mid);
    msort(data,mid+1,right);

    for(i=left;i<=mid;i++){
        temp[i]=data[i];
    }
    for(i=mid+1,j=right;i<=right;i++,j--){
        temp[i]=data[j];
    }

    i=left;j=right;

    for(k=left;k<=right;k++){
        if(temp[i].p<temp[j].p){
            data[k]=temp[i++];
        }else{
            data[k]=temp[j--];
        }
    }
}*/

int main(void){
    int n,m,i,j,k;
    scanf("%d %d",&n,&m);
    city data[m];
    city *p[n+1],*pre_p[n+1];
    (city *)malloc(m*sizeof(city));
    for(i=1;i<n+1;i++){
        pre_p[i]=p[i];
    }
    for(i=0;i<m;i++){
        data[i].num=i;
        scanf("%d %d",&data[i].p, &data[i].year);
        p[data[i].p]=&data[i];
        p[data[i].p]++;
    }

    for(i=1;i<n+1;i++){
        k=(p[i]-pre_p[i])/sizeof(city);
        p[i]=pre_p[i];
        if(k){
            qsort(p[i],k,sizeof(city),cmp_year);
            for(j=0;j<k;j++){
                p[i][j].rank=j+1;
            }
        }
    }
    qsort(data, m, sizeof(city), cmp_num);
    for(i=0;i<m;i++){
        printf("%012d\n", 1000000*data[i].p+data[i].rank);
    }
    return 0;
}