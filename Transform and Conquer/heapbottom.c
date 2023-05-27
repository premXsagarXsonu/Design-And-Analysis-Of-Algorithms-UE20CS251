#include<stdio.h>
#include<stdlib.h>
#define MAX = 10;

int bottomUp(int  heap[7],int size) {
    int k,i,j,key;
    int n = size-1;
 
	for(k=(n)/2; k>=1;k--)
	{
		j=k;
		key=heap[j];
		
		i=2*j;              
		while(i<=n)          
		{   
            
			if((i+1)<=n)   
			{
				if(heap[i+1]>heap[i])
				i++;
			}
			if(key<heap[i])
			{
				heap[j]=heap[i];
				j=i;
				i=2*j;
			}
			else
			 break;	
		}

     heap[j]=key;
}

}

int main()
{
    int n=7;
    int heap[n];
    printf("Enter thr Elements of the heap");
    for(int i=1;i<n;i++)
    {
        scanf("%d",&heap[i]);
    }
    bottomUp(heap,n);
    for(int i=1;i<7;i++)
    {
        printf("%d \t",heap[i]);
    }
    return 0;
}

