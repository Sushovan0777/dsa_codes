#include<stdio.h>
#include<conio.h>
int fibo(int);
void main()
{
	int num, f,i;
	printf("Enter a num:");
	scanf("%d",&num);
	for(i =1; i<=num; i++)
	{
		f = fibo(i);
		printf("%d\t",f);
	}
}

int fibo(int n)
{
	
	if( n ==1)
	{
		return 0;
	}
	else if (n==2)
	{
		return 1;
	}
	else
	{
		return(fibo(n-1)+fibo(n-2));	
	}	

}

