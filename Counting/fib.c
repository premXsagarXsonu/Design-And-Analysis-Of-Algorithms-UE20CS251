#include<stdio.h>

int fib(int n,int *count){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	else
		*count +=2;
		return fib(n-1,count)+fib(n-2,count);
}

int main()
{
	int i;
	printf("Enter the Number :");
	scanf("%d",&i);
	int count;
	printf("Fib of %d is %d\n",i,fib(i,&count));
	printf("Calls %d",count);
}
