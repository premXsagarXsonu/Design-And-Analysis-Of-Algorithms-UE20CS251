#include<stdio.h>

int arraySum(int n,int a[]){

	if(n==0)
		return 0;
	return a[n-1]+ arraySum(n-1,a);

}

int main()
{
	int a[] = {1,2,3,10};
	int n = 4;
	printf("Sum of the Array : %d",arraySum(n,a));
}

