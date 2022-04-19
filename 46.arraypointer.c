#include <stdio.h>

int arr[] = {1,2,3,4,5};
int *p[5],i;

int main(void)
{
	for(i=0;i<5;i++)
	{
		p[i] = &arr[i];
	}
	for(i=0;i<5;i++)
	{
		printf("The value of p[%d] is %d\n",i,*p[i]);
	}
	return 0;
}
