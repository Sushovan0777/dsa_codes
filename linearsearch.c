#include <stdio.h>

int search(int arr[], int N, int x)
{
    int i;

    for ( i = 0; i < N ;i++)
    {
        if ( arr[i] == x)
        {
            return i;
        }
    }

    return -1; // Return -1 if the element is not found
}

int main(void)
{
     int array[100],n,tofind,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&array[i]);
	}
	printf("enter element to be found:");
	scanf("%d",&tofind);

    // Function call
    int result = search(array, n, tofind);

    (result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d", result);

    return 0;
}
