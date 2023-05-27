#include<stdio.h>
#include<stdlib.h>

int swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void print(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}


int Q_sort(int arr[],int l,int r)
    {
    int pivot = arr[l];
    int i=l, j=r, temp;
    while(i<=j)
    {
        do{
            i++;
        } while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        swap(arr[i],arr[j]);
    }
    swap(arr[i],arr[j]);
    swap(&pivot,arr[j]);
    Q_sort(arr,l,j-1);
    Q_sort(arr,j+1,r);
}

int main(){
    int n;
    printf("Enter the number of the elemets : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter thr elemets \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    print(arr,n);
    Q_sort(arr,0,n-1);
    print(arr,n);
    
    return 0;
}