#include <stdio.h>

int *func(int *p,int n);

int main(void)
{
	int n = 3;
	int arr[5] = {1,2,3,0,5};
	int *ptr;

	ptr = func(arr,n);

	printf("The value is %d\n",*ptr);

	return 0;
}

int *func(int *p,int n)
{
	p = p + n;

	return p;
}
