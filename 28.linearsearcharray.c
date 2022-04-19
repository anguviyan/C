#include <stdio.h>

int arr[50];
int index,n,i,item;
int linearsearch(int arr[],int n,int item);

int main(void)
{
	printf("Enter number of elements to be included: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter the value: ");
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the value to be search: ");
	scanf("%d",&item);

	index = linearsearch(arr,n,item);
	
	if(index == -1)
		printf("item is not found in the array\n");
	else
		printf("item found in index %d is %d\n",index,arr[index]);

	return 0;
}

/*It will search for whole array*/

/*int linearsearch(int arr[],int n,int item)
{
	int i = 0;

	while((i<n) && (item!=arr[i]))
		i++;
	if(i<n)
		return i;
	else
		return -1;
}*/

/*It will search for item once it found will end*/
int linearsearch(int arr[],int n,int item)
{
	int i = 0;

	while((i<n) && (arr[i]<item))
		i++;
	if(arr[i] == item)
		return i;
	else
		return -1;
}
