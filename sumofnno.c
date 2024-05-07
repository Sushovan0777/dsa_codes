#include<conio.h>
#include<stdio.h>
int sum(int n)
{
	if (n==0) return 0;
	else return(n+sum(n-1));
	
}
int main()
{
	int n,i;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("sum=%d",sum(n));
	
}
