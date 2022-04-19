#include <stdio.h>

int a[5],b,i;

int main(void)
{
	printf("Enter the number of element to be entered: ");
	scanf("%d",&b);

	for(i=0;i<b;i++)
	{
		printf("Enter the value: ");
		scanf("%d",&a[i]);
	}

	for(i=0;i<b;i++)
	{
		printf("The value of a[%d] is %d\n",i,a[i]);
	}
	return 0;
}
