#include<stdio.h>
#include<conio.h>
void toh(int n,char from,char to,char aux)
{
	if(n==0)
	{
		return;
	}
	toh(n-1,from,aux,to);
	printf("move disk %d from %c to %c\n",n,from,to);
	toh(n-1,aux,to,from);
}
int main()
{	int n;
	printf("enter the no of disk");
	scanf("%d",&n);
	toh(n,'A','C','B');
	return 0;
}
