#include<stdio.h>

int findMaxRec(int A[], int n)
{
	int a;
	int b;
    // if size = 0 means whole array has been traversed
    	if (n == 1)
        	return A[0];
    	else
    		a = A[n-1];
    		b = findMaxRec(A, n-1);
    		if(a>b)
    			return a;
    		else 
    			return b;
}	

int main()
{
	int A[] = {1, 4, 45, 6, -50, 10, 2};
    	int n = sizeof(A)/sizeof(A[0]);
    	printf("The largest element : %d",findMaxRec(A, n));
  	return 0;
}

int arrayMax(int n,int a[],int big){
	if(n==0)
		return big;
	if(a[n-1]>big)
		big=a[n-1];
	return arrayMax(n-1,a,big);
}
