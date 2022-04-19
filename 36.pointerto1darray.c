#include <stdio.h>

int arr[] = {1,2,3,4,5};
int *ptr,i;

void func(int *p)
{
	for(i=0;i<5;i++)
		printf("The value of arr[%d] is %d\n",i,*(p+i));
}

int main(void)
{
	func(arr);
	return 0;
}
