#include<stdio.h>

void toh(int n,char src,char temp,char dest,int *count){
	if (n == 0)
		return;
	else	
		*count +=2;
		toh(n-1,src,dest,temp,count);
		printf("Move disk %d from %c to %c\n",n,src,dest);
		toh(n-1,temp,src,dest,count);
}

int main()
{
	int i;
	int count;
	printf("Enter the Number :");
	scanf("%d",&i);
	toh(i,'A','B','C',&count);
	printf("%d Number of operation",count);
	
}
