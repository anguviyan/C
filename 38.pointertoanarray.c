#include <stdio.h>

int arr[] = {1,2,3,4,5};
int *p;
int (*ptr)[5],i;

int main(void)
{
	p = arr;

	for(i=0;i<5;i++)
		printf("The value of arr[%d] is %d\n",i,*(p+i));

	ptr = &arr;

	for(i=0;i<5;i++)
		printf("The value of arr[%d] is %d\n",i,*(*(ptr+0)+i));
	return 0;
}
