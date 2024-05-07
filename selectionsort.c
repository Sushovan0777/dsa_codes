#include<conio.h>
#include<stdio.h>
void selectionsort(int arr[],int size)
{
	int i,j,imin;
	for(i=0;i<size;i++)
	{
		//imin=i;
		for(j=i+1;j<size;j++)
		{
			if (arr[j]<arr[i]){
			int temp;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;}
		}
	}
}
void main()
{
	int array[10],i,j,n;
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter the data:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	selectionsort(array,n);
	printf("after sorting:\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	return 0;
}
