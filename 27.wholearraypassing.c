#include <stdio.h>

int arr[] = {1,2,3,4,5};
int a;

int func(int a[]);

int main(void)
{
	func(arr);
	return 0;
}

int func(int a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("The value of a[%d] is %d\n",i,a[i]);
	}
}
