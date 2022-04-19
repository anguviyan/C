#include <stdio.h>

int n,i,min,j,temp;
int arr[10];

int main(void)
{
	printf("Enter the number of elements to be added: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter the value of the array: ");
		scanf("%d",&arr[i]);
	}

	/*Find the index of smallest element*/
	min = 0;
	for(j=1;j<n;j++)
	{
		if(arr[min] > arr[j])
			min = j;
	}
	if(min != 0)
	{
		temp = arr[0];
		arr[0] = arr[min];
		arr[min] = temp;
	}

	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
	return 0;
}
