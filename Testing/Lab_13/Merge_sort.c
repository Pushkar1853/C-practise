#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void merge(int *p,int b,int mid,int e);
void merge_sort(int *p,int b,int e);

int main(){
    int k=10;
    int arr[10];
    while(k--){
        scanf("%d",&arr[k]);
    }
    
    int n = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr, 0, n-1);
    return 0;
}

void merge(int *p,int b,int mid,int e){
    int ptr1,ptr2;
    ptr1=b;
    ptr2=mid+1;
    int i=0;
    int a[100];
    while(1){
        if((ptr1<=mid)&&(ptr2<=e))
        {
            if(p[ptr1]<p[ptr2])
            {
                a[i]=p[ptr1];
                ptr1++;
                i++;
            }
            else if(p[ptr1]>p[ptr2])
            {
                a[i]=p[ptr2];
                ptr2++;
                i++;
            }
            else if((ptr1>mid)&&(ptr2<=e))
            {
                a[i]=p[ptr2];
                ptr2++;
                i++;
            }
            else if((ptr1<=mid)&&(ptr2>e))
            {
                a[i]=p[ptr1];
                ptr1++;
                i++;
            }
        }
        else if((ptr1>mid)&&(ptr2>e))
        {
            for(i=b;i<e;++i)
            {
                p[i]=a[i-b];
            }
            break;
        }
    }
}
void merge_sort(int *p,int b,int e){
    int mid=(b+e)/2;
    if(b==e){
        return;
    }
    merge_sort(p,b,mid);
    merge_sort(p,mid+1,e);
    merge(p,b,mid,e);
}