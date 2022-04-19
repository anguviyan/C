#include <stdio.h>

int n,i,j,k,temp,min;
int arr[50];

int main(void)
{
	printf("Enter the number of element to added: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Value of a[%d] is ",i);
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(arr[min] > arr[j])
				min = j;
		}

		if(i != min)
		{
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}

	for(i=0;i<n;i++)
	{
		printf("The value of a[%d] is %d\n",i,arr[i]);
	}
			

	return 0;
}
