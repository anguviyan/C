#include <stdio.h>

int n,a,item;
int arr[10],index;

int binarysearch(int arr[],int n,int item);

int main(void)
{
	printf("Enter the number of element in array: ");
	scanf("%d",&n);
	
	for(a=0;a<n;a++)
	{
		printf("The value of a[%d] is ",a);
		scanf("%d",&arr[a]);
	}

	printf("Enter the item to be search: ");
	scanf("%d",&item);

	index = binarysearch(arr,n,item);

	if(index == -1)
		printf("There is no item is found in the array\n");
	else
		printf("The item %d found in %d\n",item,arr[index]);

	return 0;
}

int binarysearch(int arr[],int n,int item)
{
	int mid,low = 0,up = n-1;

	while(low <= up)
	{
		mid = (low+up)/2;

		if(item > arr[mid])
			low = mid + 1;
		else if(item < arr[mid])
			up = mid - 1;
		else
			return mid;
	}

	return -1;
}
