#include <stdio.h>

int arr[] = {1,2,3,4,5};
int i;
int func(int *p);

int main(void)
{
	func(arr);
	return 0;
}

int func(int *p)
{
	for(i=0;i<5;i++)
	{
		printf("The value of arr[%d] is %d\n",i,*p+i);
	}
}
