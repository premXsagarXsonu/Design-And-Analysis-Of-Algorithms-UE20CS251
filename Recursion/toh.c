#include<stdio.h>

void toh(int n,char src,char temp,char dest){
	if (n == 0)
		return;
	else
		toh(n-1,src,dest,temp);
		printf("Move disk %d from %c to %c\n",n,src,dest);
		toh(n-1,temp,src,dest);
}

int main()
{
	int i;
	printf("Enter the Number :");
	scanf("%d",&i);
	toh(i,'A','B','C');
}
