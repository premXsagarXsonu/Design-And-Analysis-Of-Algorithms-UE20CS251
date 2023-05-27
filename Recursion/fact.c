#include<stdio.h>

int fact(int n,int *count){
	if(n==0)
		return 1;
	else
		*count +=1;
		return n*fact(n-1,count);
}

int main()
{
	int i;
	printf("Enter the Number :");
	scanf("%d",&i);
	int count=0;
	printf("Factorial of %d is %d\n",i,fact(i,&count));
	printf("Number of recursive Calls : %d",count);	
}
