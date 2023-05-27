#include<stdio.h>
#include<stdlib.h>

int mergerSort(int low,int a[],int high)
{
    int mid;
    if(high>1){
        mid = low+high-1/2;
        mergerSort(low,a,mid);
        mergerSort(mid+1,a,high);
        merge(a,low,mid,high);
    }
}

void merge(int a[],int low,int mid,int high)
{
    int i,j,k;
    i = 0;
    j = 0;
    k = 0;





}