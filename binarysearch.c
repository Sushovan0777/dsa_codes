#include <stdio.h>

// Binary Search function
int binarySearch(int array[], int x, int low, int high) {
    // Repeat until the pointers low and high meet each other
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If the element is found at the mid index
        if (array[mid] == x)
            return mid;

        // If the element is greater than the mid element, search in the right half
        if (array[mid] < x)
            low = mid + 1;

        // If the element is smaller than the mid element, search in the left half
        else
            high = mid - 1;
    }

    return -1;
}

int main(void) {
    int array[100],n,tofind,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&array[i]);
	}
	printf("enter element to be found:");
	scanf("%d",&tofind);
    int result = binarySearch(array, tofind, 0, n - 1);

    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);

    return 0;
}
